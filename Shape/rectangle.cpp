#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI& _window)
:Shape(_window),
height(0),
width(0)
{
}

Rectangle::~Rectangle()
{

}

void Rectangle::draw()
{
	if (position.x == NULL || position.y == NULL) throw runtime_error("x and y values must not be NULL");

	windowAPI->setDrawingColor(lineColor);
	windowAPI->drawRectangle(position, width, height);
}

void Rectangle::setPosition(const Point& _point)
{
	position = _point;
}

void Rectangle::setHeight(const int _height)
{
	if (_height < 0) throw invalid_argument("Height must be a positive value");
	height = _height;
}

void Rectangle::setWidth(const int _width)
{
	if (_width < 0) throw invalid_argument("Width must be a positive value");
	width = _width;
}

void Rectangle::setFillColor(Color::COLOR_TYPE _color)
{
	fillColor = _color;
	windowAPI->fillRectangle(position, width, height);
}

void Rectangle::setLineColor(Color::COLOR_TYPE _lineColor)
{
	lineColor = _lineColor;
}