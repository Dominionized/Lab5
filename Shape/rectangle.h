#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI& _window);
		~Rectangle();
		void draw();
		void setPosition(const Point& _point);
		void setHeight(const int _height);
		void setWidth(const int _width);
		void setFillColor(Color::COLOR_TYPE _color);
		void setLineColor(Color::COLOR_TYPE _lineColor);

	private:
		Point position;
		int height;
		int width;
	
	};
}