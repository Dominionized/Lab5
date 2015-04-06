#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class GraphicUtility
	{
	public:
		// D�termine si deux lignes sont parall�les. 
		static bool lineParallel(Point _p1, Point _p2, Point _p3, Point _p4);

		// D�tremine si deux lignes se croisent
		static bool lineIntersect(Point _p1, Point _p2, Point _p3, Point _p4);

	};
}
