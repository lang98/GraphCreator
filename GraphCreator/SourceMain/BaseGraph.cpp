#include "BaseGraph.h"
#include "AbstractPos.h"
#include "Point.h"
#include "BaseContent.h"
#include "LinePos.h"


CBaseGraph::CBaseGraph()
{
	m_pControl = NULL;
}

void CBaseGraph::notify()
{
	for(int i=0; i<baseContents.size(); i++)
	{
		baseContents[i]->update();
	}
}

void CBaseGraph::addObs(CBaseContent *pBaseContent)
{
	baseContents.push_back(pBaseContent);
}

void CBaseGraph::removeObs(CBaseContent *pBaseContent)
{
	int index;
	for(int i=0; i<baseContents.size(); i++)
	{
		if(pBaseContent == baseContents[i])
		{
			index = i;
			break;
		}
	}
	baseContents.erase(baseContents.begin()+index);
}