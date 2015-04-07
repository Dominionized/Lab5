#include "stdafx.h"

#include <utility>

using namespace ShapeLibrary;

/**
Détermine si deux lignes sont parallèles. 
@param[in] _p1 Le point de départ de la ligne 1
@param[in] _p2 Le point d'arrivée de la ligne 1
@param[in] _p3 Le point de départ de la ligne 2
@param[in] _p4 Le point d'arrivée de la ligne 2
@return Vrai si les lignes sont parallèles, sinon faux
*/
bool GraphicUtility::lineParallel( Point _p1, Point _p2, Point _p3, Point _p4)
{
	double denominator = ((_p4.y - _p3.y) * (_p2.x - _p1.x) - (_p4.x - _p3.x) * (_p2.y - _p1.y));
	if (denominator == 0)
	{
		return true;
	}
	return false;
}

/**
Détremine si deux lignes se croisent
@param[in] _p1 Le point de départ de la ligne 1
@param[in] _p2 Le point d'arrivée de la ligne 1
@param[in] _p3 Le point de départ de la ligne 2
@param[in] _p4 Le point d'arrivée de la ligne 2
@return Vrai si les lignes se croisent. Faux dans les autres cas
*/

bool GraphicUtility::lineIntersect( Point _p1, Point _p2, Point _p3, Point _p4)
{
	double denominator;
	pair<double,double> intersection;

	denominator = ((_p4.y - _p3.y) * (_p2.x - _p1.x) - (_p4.x - _p3.x) * (_p2.y - _p1.y));
	intersection = make_pair(((_p4.x - _p3.x) * (_p1.y - _p3.y) - (_p4.y - _p3.y) * (_p1.x - _p3.x)) /denominator,
		                     ((_p2.x - _p1.x) * (_p1.y - _p3.y) - (_p2.y - _p1.y) * (_p1.x - _p3.x)) /denominator);
				
	if (denominator == 0 || intersection.first < 0 || intersection.first > 1 || intersection.second < 0 || intersection.second > 1)
	{
		return false;
	}
	return true;
}

