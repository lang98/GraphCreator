#pragma once
#include "BaseContent.h"
using namespace std;

class CBaseContent;

class CGraphPropContent : public CBaseContent
{
public:
	CGraphPropContent();
	virtual void update();
	virtual void displayProp() =0;
};

