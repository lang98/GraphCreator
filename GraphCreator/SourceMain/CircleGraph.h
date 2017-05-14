#pragma once
#include "BaseGraph.h"

class CCirclePos;

class CCircleGraph : public CBaseGraph
{
public:
	CCircleGraph();
	~CCircleGraph();

public:
	CCirclePos *m_pCirclePos;


public:
	void setPoint();
	void changePos(char);

private:
	void display(HDC hdc);
	void displayProp();

private:
	int m_left;
	int m_top;
	int m_right;
	int m_bottom;
};

