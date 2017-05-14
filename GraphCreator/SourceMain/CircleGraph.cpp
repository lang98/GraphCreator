#include "CircleGraph.h"
#include "CirclePos.h"
#include "CircleControl.h"
#include <iostream>
using namespace std;

CCircleGraph::CCircleGraph()
{
	m_pCirclePos = new CCirclePos();

	m_pCirclePos->addCircle(200, 220, 75);

	m_pControl = new CCircleControl();
	m_pControl->setGraph(this);
	m_pControl->setPos(m_pCirclePos);

}

CCircleGraph::~CCircleGraph()
{
	if(m_pCirclePos != NULL)
	//if(m_pCirclePos)
	{
		delete m_pCirclePos;
		m_pCirclePos = NULL;
	}
}

void CCircleGraph::display(HDC hdc)
{
	m_left = (m_pCirclePos->getCentreX()) - (m_pCirclePos->getRadius());
	m_top = (m_pCirclePos->getCentreY()) - (m_pCirclePos->getRadius());
	m_right = (m_pCirclePos->getCentreX()) + (m_pCirclePos->getRadius());
	m_bottom = (m_pCirclePos->getCentreY()) + (m_pCirclePos->getRadius());

	Ellipse(hdc, m_left, m_top, m_right, m_bottom);
}

void CCircleGraph::displayProp()
{
	int x, y;
	x = m_pCirclePos->getCentreX();
	y = m_pCirclePos->getCentreY();
	cout <<"Centre: ("<< x <<", "<< y <<")"<< endl;
	cout <<"Radius: "<< m_pCirclePos->getRadius() << endl;
}

void CCircleGraph::setPoint()
{
	int x, y, r;
	cout <<"Centre X: ";
	cin >> x;
	cout <<"Centre Y: ";
	cin >> y;
	cout <<"Radius: ";
	cin >> r;
	m_pCirclePos->addCircle(x, y, r);
}

void CCircleGraph::changePos(char ch)
{
	m_pControl->actToChange(ch);
	notify();
}

