#include "LineControl.h"
#include "Point.h"
#include "LinePos.h"
//#include "LineGraph.h"
//#include "BaseGraph.h"

CLineControl::CLineControl()
{
	
}

void CLineControl::actToChange(char ch)
{
	CLinePos *temp = (CLinePos*)m_pPos;
	switch(ch)
	{
	case 'd':
		for(int i=0; i<temp->points.size(); i++)
		{
			temp->points[i]->x += 10;
		}
		break;
	case'a':
		for(int i=0; i<temp->points.size(); i++)
		{
			temp->points[i]->x -= 10;
		}
		break;
	case'w':
		for(int i=0; i<temp->points.size(); i++)
		{
			temp->points[i]->y -= 10;
		}
		break;
	case's':
		for(int i=0; i<temp->points.size(); i++)
		{
			temp->points[i]->y += 10;
		}
		break;
	}
}


