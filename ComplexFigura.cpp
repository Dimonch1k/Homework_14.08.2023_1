#include "ComplexFigura.h"




void ComplexFigura::addFigure(GeoFigura* figura)
{
	figures.push_back(figura);
}


void ComplexFigura::totalSquare()
{
	double totalSquare = 0.0;
	for (int i = 0; i < figures.size(); i++)
	{
		cout << figures[i]->getFigureName() << figures[i]->countSquare() << "\n\n";
		totalSquare += figures[i]->countSquare();
	}
	cout << "The total square of all figures is: " << totalSquare << "\n\n\n";
}