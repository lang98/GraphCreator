#include "CirclePos.h"
#include "Point.h"
//using namespace std;

CCirclePos::CCirclePos() : m_centreX(0), m_centreY(0), m_radius(0)
{

}

CCirclePos::CCirclePos(int centreX, int centreY, int radius)
{
	m_centreX = centreX;
	m_centreY = centreY;
	m_radius = radius;
}

CCirclePos::~CCirclePos()
{

}

void CCirclePos::addCircle(int centreX, int centreY, int radius)
{
	m_centreX = centreX;
	m_centreY = centreY;
	m_radius = radius;
}

int CCirclePos::getLeft()
{
	return m_centreX - m_radius;
}
int CCirclePos::getTop()
{
	return m_centreY - m_radius;
}
int CCirclePos::getRight()
{
	return m_centreX + m_radius;
}
int CCirclePos::getBottom()
{
	return m_centreY + m_radius;
}
int CCirclePos::getCentreX()
{
	return m_centreX;
}
int CCirclePos::getCentreY()
{
	return m_centreY;
}
int CCirclePos::getRadius()
{
	return m_radius;
}

void CCirclePos::setCentreX(int x)
{
	this->m_centreX = x;
}

void CCirclePos::setCentreY(int y)
{
	this->m_centreY = y;
}