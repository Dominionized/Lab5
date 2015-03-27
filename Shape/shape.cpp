#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI& _window)
:windowAPI(&_window),
nbPoints(0)
{
}

Shape::~Shape()
{

}

void Shape::add(const Point& _point)
{
	nbPoints++;
	points.push_back(_point);
}

void Shape::draw()
{
	Color* color = new Color();
	windowAPI->setDrawingColor(*color);

	for (unsigned int i = 0; i < nbPoints; i++)
	{
		if (i == nbPoints - 1)
		{
			windowAPI->drawLine(points[i], points[0]);
		}
		else
		{
			windowAPI->drawLine(points[i], points[i + 1]);
		}

	}
}

Point Shape::getPoint(unsigned _index)
{
	return points[_index];
}

void Shape::setLineColor(Color::COLOR_TYPE _color)
{
	lineColor = _color;
}

void Shape::setFillColor(Color::COLOR_TYPE _color)
{
	fillColor = _color;
}

Color Shape::getLineColor()
{
	return lineColor;
}

Color Shape::getFillColor()
{
	return fillColor;
}

int Shape::getNumberOfPoints()
{
	return nbPoints;
}
