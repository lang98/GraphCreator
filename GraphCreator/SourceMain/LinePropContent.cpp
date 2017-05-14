#include "LinePropContent.h"
#include "LineGraph.h"

CLinePropContent::CLinePropContent()
{
	
}
void CLinePropContent::displayProp()
{
	m_pGraph->displayProp();
}

void CLinePropContent::update()
{
	this->displayProp();
}
