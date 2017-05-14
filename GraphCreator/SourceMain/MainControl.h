#pragma once
#include "SimpFactory.h"
#include "DisplayContent.h"
#include "GraphPropContent.h"
#include "LinePropContent.h"
#include "BaseGraph.h"
#include <Windows.h>
using namespace std;

class CMainControl
{
private:
	CDisplayContent *m_pDisContent;
	CGraphPropContent *m_pGraPropContent;
	CBaseGraph *m_pBaseGraph;
	CGraphControl *m_pGraphControl;

	HDC m_hdc;
public:
	CMainControl(HDC);
	//void actToChangePos(char);
	void Main();
};

