#pragma once
#include <iostream>
using namespace std;

const double PI = 3.14;

#include "GeoFigura.h"
class Circle :
    public GeoFigura
{
private:
    double radius;

public:
    Circle(double radius);
    double countSquare() override;

    double getRadius();
    string getFigureName() override;
};

