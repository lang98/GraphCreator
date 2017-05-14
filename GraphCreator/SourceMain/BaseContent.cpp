#include "BaseContent.h"
#include "BaseGraph.h"
#include "AbstractPos.h"

CBaseContent::CBaseContent()
{

}

void CBaseContent::setGraph(CBaseGraph *p)
{
	m_pGraph = p;
}