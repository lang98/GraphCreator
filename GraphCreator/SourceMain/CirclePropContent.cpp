#include "CirclePropContent.h"
#include "CircleGraph.h"

CCirclePropContent::CCirclePropContent()
{

}

void CCirclePropContent::displayProp()
{
	m_pGraph->displayProp();
}

void CCirclePropContent::update()
{
	this->displayProp();
}
