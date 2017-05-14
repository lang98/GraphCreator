#pragma once
#include <vector>
#include "AbstractPos.h"

using namespace std;

class CPoint;

class CLinePos : public CAbstractPos
{
public:
	vector <CPoint *> points;

public:
	CLinePos();
	void addPoint(CPoint*);
};
