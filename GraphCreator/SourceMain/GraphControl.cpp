#include "GraphControl.h"
#include "BaseGraph.h"
#include "AbstractPos.h"

CGraphControl::CGraphControl()
{

}

void CGraphControl::setGraph(CBaseGraph *p)
{
	m_pGraph = p;
}

void CGraphControl::setPos(CAbstractPos *p)
{
	m_pPos = p;	
}