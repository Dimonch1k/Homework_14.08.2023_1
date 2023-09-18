#pragma once
#include <iostream>
using namespace std;


#include "GeoFigura.h"
class Rectangle :
    public GeoFigura
{
private:
    double rec1, rec2;

public:
    Rectangle(double rec1, double rec2);
    double countSquare() override;

    double getRec1();
    double getRec2();

    string getFigureName() override;
};

