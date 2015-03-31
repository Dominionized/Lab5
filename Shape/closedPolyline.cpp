#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI& _window)
:OpenPolyline(_window)
{
}

ClosedPolyline::~ClosedPolyline()
{
}

void ClosedPolyline::add(const Point& _point)
{
	OpenPolyline::add(_point);
}

void ClosedPolyline::draw()
{
	if (nbPoints < 3) throw runtime_error("Less than 3 points");
	OpenPolyline::draw();
	windowAPI->drawLine(points[nbPoints - 1], points[0]);
}