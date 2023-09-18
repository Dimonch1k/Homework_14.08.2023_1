#include "Circle.h"


Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::countSquare()
{
	return PI * pow(radius, 2);
}


double Circle::getRadius()
{
	return radius;
}

string Circle::getFigureName()
{
	return "Circle area: ";
}