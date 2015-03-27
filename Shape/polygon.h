#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon
	{
	public:
		Polygon(IWindowAPI&_window);
		void add(const Point& _point);
		void draw();

	};
}
