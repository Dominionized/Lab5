#include "stdafx.h"

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI& _window)
	:ClosedPolyline(_window)
{
}

void Polygon::add(const Point& _point)
{
	if (getNumberOfPoints() > 1)
	{
		// Check if new line is colliding with others.

		// 2 points of new line
		Point point1 = points.back();
		Point point2 = _point;

		// points.size - 2 is because the two last lines cannot cross because they are connected.
		for (unsigned int i = 0; i < points.size() - 2; i++)
		{
			if (GraphicUtility::lineIntersect(points[i], points[i + 1], point1, point2))
			{
				throw runtime_error("Line crosses other line");
			}
		}
	}

	Shape::add(_point);
}