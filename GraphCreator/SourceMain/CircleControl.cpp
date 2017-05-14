#include "CircleControl.h"
#include "CirclePos.h"
#include "Point.h"
//using namespace std;

CCircleControl::CCircleControl()
{
}

void CCircleControl::actToChange(char ch)
{
	CCirclePos *temp = (CCirclePos*)m_pPos;
	switch(ch)
	{
	case 'd':
		temp->setCentreX(temp->getCentreX()+10);
		break;
	case'a':
		temp->setCentreX(temp->getCentreX()-10);
		break;
	case'w':
		temp->setCentreY(temp->getCentreY()-10);
		break;
	case's':
		temp->setCentreY(temp->getCentreY()+10);
		break;
	}
}