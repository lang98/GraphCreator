#ifndef _LINEGRAPH_INCLUDE_H_
#define _LINEGRAPH_INCLUDE_H_
#include <vector>
#include "BaseGraph.h"
//using namespace std;
using std::vector;

class CLinePos;
class CPoint;
class CAbstractPos;
class CLinePropContent;

class CLineGraph : public CBaseGraph
{
private:
	int x0, y0, x1, y1;
	CLinePropContent *m_pLinePropContent;

public:
	CLinePos *m_pLinePos;

public:
	CLineGraph();
	void setPoint();
	//CPoint *getPos(int);
	void display(HDC hdc);
	void displayProp();
	void changePos(char);

	//void addObs(CBaseContent *);
	//void removeObs(CBaseContent *);
	//void notify();
};

#endif