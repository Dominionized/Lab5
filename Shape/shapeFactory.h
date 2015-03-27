#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class	ShapeFactory
	{
	public:
		ShapeFactory(IWindowAPI& _window);
		OpenPolyline createOpenPolyLine();
		Circle createCircle(Point _point, unsigned int _radius);
		Rectangle createRectangle(Point _position, unsigned int _height, unsigned int _width);
		ClosedPolyline createClosedPolyLine();
		Polygon createPolygone();
		
	};
}