#pragma once

using namespace std;

class CBaseGraph;
class CAbstractPos;

class CGraphControl
{
//protected:
protected:
	CBaseGraph *m_pGraph;
	CAbstractPos *m_pPos;
public:
	CGraphControl();
	void setGraph(CBaseGraph *p);
	void setPos(CAbstractPos *p);
	virtual void actToChange(char) =0;
};

