#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class GraphicUtility
	{
	public:
		// Détermine si deux lignes sont parallèles. 
		static bool lineParallel(Point _p1, Point _p2, Point _p3, Point _p4);

		// Détremine si deux lignes se croisent
		static bool lineIntersect(Point _p1, Point _p2, Point _p3, Point _p4);

	};
}
