#pragma once

using namespace std;

class CBaseGraph;
class CAbstractPos;

class CBaseContent
{
public:
	CBaseGraph *m_pGraph;
public:
	CBaseContent();
	virtual void update() =0;
	void setGraph(CBaseGraph *);
	//virtual void setPos(CAbstractPos *);
};