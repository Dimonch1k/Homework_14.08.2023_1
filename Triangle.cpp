#include "Triangle.h"


Triangle::Triangle(double tri1, double tri2)
{
	this->tri1 = tri1;
	this->tri2 = tri2;
}

double Triangle::countSquare()
{
	return 0.5 * tri1 * tri2;
}


double Triangle::getTri1()
{
	return tri1;
}

double Triangle::getTri2()
{
	return tri1;
}


string Triangle::getFigureName()
{
	return "Triangle area: ";
}