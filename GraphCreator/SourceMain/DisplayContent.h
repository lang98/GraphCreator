#pragma once
#include "BaseContent.h"
#include <Windows.h>
using namespace std;

class CBaseContent;
class CLineGraph;

class CDisplayContent : public CBaseContent
{
private:
	HDC m_hDC;
public:
	CDisplayContent();
	CDisplayContent(HDC hdc);
	void update();
	void displayGraph();
};

