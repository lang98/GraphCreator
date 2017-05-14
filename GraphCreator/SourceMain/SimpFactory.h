#pragma once
#include "GraphPropContent.h"
#include "BaseGraph.h"
#include "DisplayContent.h"
#include "LineGraph.h"
#include "LinePropContent.h"
#include "CircleGraph.h"
#include "CirclePropContent.h"

#include <Windows.h>
using namespace std;

class CSimpFactory
{
private:
	CSimpFactory();
	static CSimpFactory *m_pInstance;
public:
	static CSimpFactory *GetInstance();
	CBaseGraph *createGraph(char);
	CGraphPropContent *createPropContent(char);
	//CDisplayContent *createDisplayContent(char, HDC);
};

