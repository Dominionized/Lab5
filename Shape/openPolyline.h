#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI& _window);
		~OpenPolyline();
		void add(const Point& _point);
		void draw();

	};
}
