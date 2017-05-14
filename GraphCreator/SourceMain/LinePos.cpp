#include "LinePos.h"
#include "Point.h"
//using namespace std;

CLinePos::CLinePos()
{

}

void CLinePos::addPoint(CPoint *point)
{
	points.push_back(point);
}


