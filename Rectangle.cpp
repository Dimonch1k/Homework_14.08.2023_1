#include "Rectangle.h"

Rectangle::Rectangle(double rec1, double rec2)
{
	this->rec1 = rec1;
	this->rec2 = rec2;
}

double Rectangle::countSquare()
{
	return rec1 * rec2;
}


double Rectangle::getRec1()
{
	return rec1;
}

double Rectangle::getRec2()
{
	return rec2;
}


string Rectangle::getFigureName()
{
	return "Rectangle area: ";
}