#include "SimpFactory.h"

CSimpFactory *CSimpFactory::m_pInstance = NULL;
CSimpFactory::CSimpFactory()
{
}

CSimpFactory *CSimpFactory::GetInstance()
{
	if (m_pInstance == NULL)
	{
		m_pInstance = new CSimpFactory();
	}
	return m_pInstance;
}

CBaseGraph *CSimpFactory::createGraph(char keyVal)
{
	switch(keyVal)
	{
	case 'l':
		return new CLineGraph();
		break;
	case 'c':
		return new CCircleGraph();
	default:
		return NULL;
		break;
	}
}

CGraphPropContent *CSimpFactory::createPropContent(char keyVal)
{
	switch(keyVal)
	{
	case 'l':
		return new CLinePropContent();
		break;
	case 'c':
		return new CCirclePropContent();
	default:
		return NULL;
		break;
	}
}

/*
CDisplayContent *CSimpFactory::createDisplayContent(char keyVal, HDC hdc)
{
	switch(keyVal)
	{
	case 'l':
		return new CLineDisplayContent(hdc);
		break;
	default:
		return NULL;
		break;
	}
}
*/