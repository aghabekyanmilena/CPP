#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
	return (a.getX() * (b.getY() - c.getY()) +
			b.getX() * (c.getY() - a.getY()) +
			c.getX() * (a.getY() - b.getY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC = area(a, b, c);
	Fixed areaPAB = area(point, a, b);
	Fixed areaPBC = area(point, b, c);
	Fixed areaPCA = area(point, c, a);

	if (areaABC < 0)
		areaABC = areaABC * Fixed(-1);
	if (areaPAB < 0)
		areaPAB = areaPAB * Fixed(-1);
	if (areaPBC < 0)
		areaPBC = areaPBC * Fixed(-1);
	if (areaPCA < 0)
		areaPCA = areaPCA * Fixed(-1);

	if (areaPAB == 0 || areaPBC == 0 || areaPCA == 0)
		return (false);

	return (areaABC == areaPAB + areaPBC + areaPCA);
}