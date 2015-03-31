#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI& _window);
		void setCenter(const Point& _point);
		void setRadius(const int _radius);
		void draw();
		void setFillColor(Color::COLOR_TYPE _color);
		void setLineColor(Color::COLOR_TYPE _lineColor);

	private:
		Point center;
		int radius;
	};
}
