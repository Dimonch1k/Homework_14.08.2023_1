#pragma once
#include <iostream>
using namespace std;


#include "GeoFigura.h"
class Triangle :
    public GeoFigura
{
private:
    double tri1, tri2;

public:
    Triangle(double tri1, double tri2);
    double countSquare() override;

    double getTri1();
    double getTri2();

    string getFigureName() override;
};

