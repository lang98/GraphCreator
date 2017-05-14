#include "MainControl.h"
#include <Windows.h>
#include <iostream>
using namespace std;

void gotoXY(int x, int y) {
	COORD pos = { x, y };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
}

CMainControl::CMainControl(HDC hdc)
{
	m_hdc = hdc;
}

void CMainControl::Main()
{	
	
	m_pDisContent = new CDisplayContent(m_hdc);//所有图形共用
	do
	{
		gotoXY(0, 0);
		char ch = '\0';
		cout <<"p: pause"<<endl;
		cout <<"l: line"<<endl;
		cout <<"c: circle"<<endl;
		cin >> ch;
		
		if (ch == 'p')
		{
			break;
		}
		
		if(ch == 'l' || ch == 'c')
		{
			CBaseGraph *pNewGraph = CSimpFactory::GetInstance()->createGraph(ch);
			m_pGraPropContent = CSimpFactory::GetInstance()->createPropContent(ch);
			
			if (pNewGraph)
			{
				m_pBaseGraph = pNewGraph;
				
				m_pGraPropContent->setGraph(pNewGraph);
				m_pDisContent->setGraph(pNewGraph);

				m_pBaseGraph->addObs(m_pDisContent);
				m_pBaseGraph->addObs(m_pGraPropContent);
			}
		}

		if (m_pBaseGraph)
		{
			m_pBaseGraph->changePos(ch);
		}
		Sleep(10);
	}
	while(1);
}

