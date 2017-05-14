#ifndef _BaseGraph_INCLUDE_H_
#define _BaseGraph_INCLUDE_H_

#include <vector>
#include <windows.h>
using namespace std;

class CGraphControl;
class CPoint;
class CBaseContent;

class CBaseGraph
{
protected:
	vector<CBaseContent *> baseContents;
	CGraphControl *m_pControl;

public:
	CBaseGraph();
	virtual void display(HDC hdc) =0;
	virtual void displayProp() =0;
	virtual void setPoint() =0;
	virtual void changePos(char) =0;
	
	void addObs(CBaseContent *);
	void removeObs(CBaseContent *);

protected:
	void notify();
};

#endif