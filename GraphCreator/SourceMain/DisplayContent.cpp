#include "DisplayContent.h"
#include "LineGraph.h"


CDisplayContent::CDisplayContent()
{
	//m_pGraph = new CLineGraph();
}

CDisplayContent::CDisplayContent(HDC hdc)
{
	m_hDC = hdc;
}

void CDisplayContent::update()
{
	this->displayGraph();
}

void CDisplayContent::displayGraph()
{
	if(m_pGraph)
	{
		m_pGraph->display(m_hDC);
	}
}