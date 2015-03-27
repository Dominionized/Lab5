#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI& _window);
		virtual ~Shape();
		virtual void add(const Point& _point);
		virtual void draw();
		Point getPoint(unsigned int _index);
		void setLineColor(Color::COLOR_TYPE _color);
		void setFillColor(Color::COLOR_TYPE _color);
		Color getLineColor();
		Color getFillColor();
		int getNumberOfPoints();

	protected:
		IWindowAPI* windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;
		int nbPoints;

	};
}
