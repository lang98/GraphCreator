#include "LineGraph.h"
#include "LinePos.h"
#include "LineControl.h"
#include "Point.h"
#include "AbstractPos.h"
//#include "BaseContent.h"
#include "LinePropContent.h"
#include <iostream>
using namespace std;

CLineGraph::CLineGraph()
{
	m_pLinePos = new CLinePos();

	CPoint *point= new CPoint(50, 70); //new point
	m_pLinePos->addPoint(point);

	point= new CPoint(300, 350); //new point
	m_pLinePos->addPoint(point);

	point= new CPoint(100, 250); //new point
	m_pLinePos->addPoint(point);

	m_pControl = new CLineControl();
	m_pControl->setGraph(this);
	m_pControl->setPos(m_pLinePos);
}

void CLineGraph::setPoint()
{
	int x, y;
	char ch;
	do
	{
		cout <<"Press 'q' to stop adding a point"<< endl;
		cin >> ch;
		if(ch == 'q')
		{
			break;
		}
		cout <<"Enter x: ";
		cin >> x;
		cout <<"Enter y: ";
		cin >> y;
		CPoint *point= new CPoint(x, y); //new point
		m_pLinePos->addPoint(point);
	}
	while(1);

	//notify();
}

/*
CPoint *CLineGraph::getPos(int index)                                                                                                          )
{
	return m_pLinePos->points[index];
}
*/

void CLineGraph::display(HDC hdc)
{
	for(int i=0; i<m_pLinePos->points.size()-1; i++)
	{
		x0 = m_pLinePos->points[i]->x;
		y0 = m_pLinePos->points[i]->y;

		x1 = m_pLinePos->points[i+1]->x;
		y1 = m_pLinePos->points[i+1]->y;

		MoveToEx(hdc,x0,y0,NULL);
		LineTo(hdc,x1,y1);
	}
	//m_pLinePos->points.clear();
}

void CLineGraph::displayProp()
{
	for(int i=0; i<m_pLinePos->points.size(); i++)
	{
		cout << endl <<"x: "<< m_pLinePos->points[i]->x << endl;
		cout <<"y: "<< m_pLinePos->points[i]->y << endl;
	}
}

void CLineGraph::changePos(char ch)
{
	m_pControl->actToChange(ch);
	notify();//∏∏¿‡
}
