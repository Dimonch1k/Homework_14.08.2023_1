#pragma once
#include <iostream>
#include <vector>
using namespace std;


#include "GeoFigura.h"
class ComplexFigura :
    public GeoFigura
{
private:
    vector<GeoFigura*> figures;

public:
    void addFigure(GeoFigura* figura);
    void totalSquare();
};

