#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0 || _y < 0)
	{
		throw invalid_argument("Coordinates should be positive.");
	}
}

bool Point::operator == (const Point & point) const
{
	return (x == point.x && y == point.y);
}

bool Point::operator != (const Point & point) const
{
	return !(*this == point); 
}
