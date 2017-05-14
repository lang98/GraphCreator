#pragma once
#include "AbstractPos.h"

class CCirclePos : public CAbstractPos
{
public:
	CCirclePos();
	CCirclePos(int centreX, int centreY, int radius);
	~CCirclePos();

private:
	int m_centreX;
	int m_centreY;
	int m_radius;

public:
	int getLeft();
	int getTop();
	int getRight();
	int getBottom();

	int getCentreX();
	int getCentreY();
	int getRadius();

	void setCentreX(int);
	void setCentreY(int);

public:
	
	void addCircle(int centreX, int centreY, int radius);
};

