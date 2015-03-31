#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI& _window)
	:Shape(_window)
{
}

void Circle::setCenter(const Point& _point)
{
	this->center = _point;
}

void Circle::setRadius(const int _radius)
{
	this->radius = _radius;
}

void Circle::draw()
{
	windowAPI->setDrawingColor(lineColor);
	windowAPI->drawCircle(center, radius);
	windowAPI->setDrawingColor(fillColor);
	windowAPI->fillCircle(center, radius);
}