#pragma once
#include "GraphControl.h"

using namespace std;

class CLinePos;
class CLineGraph;

class CLineControl : public CGraphControl
{
private:
	CLineGraph *m_pLineGraph;
public:
	CLineControl();
	void actToChange(char);
};

