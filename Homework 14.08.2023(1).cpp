#include <iostream>
#include <vector>
using namespace std;



// Task 1
/*
#include "Basket.h"
#include "Good.h"

#include "Clothes.h"
#include "Electronic.h"
#include "Food.h"


int main()
{
	vector<Good> goods;
	Basket basket(goods);


	Good good1("Jeans", 400); // Put 1 good to basket
	basket.addGood(good1);

	Good good2("Microwave", 2000); // Put 2 good to basket
	basket.addGood(good2);

	Good good3("Meat", 250); // Put 3 good to basket
	basket.addGood(good3);
	
	Good good4("MacBook", 40000); // Put 4 good to basket
	basket.addGood(good4);

	Good wrongGood("Microwave", 5000); // Wrong datas
	basket.reduceGood(wrongGood);

	Good trueGood("Microwave", 2000); // True datas
	basket.reduceGood(trueGood); 


	basket.displayAllGoods();
}*/



// Task 2


#include "ComplexFigura.h"
#include "GeoFigura.h"

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"



int main()
{
	ComplexFigura mainFigura;

	
	GeoFigura* triangle1 = new Triangle(5, 7); // Create first triangle
	mainFigura.addFigure(triangle1);
	

	GeoFigura* triangle2 = new Triangle(5, 6.5); // Create second triangle
	mainFigura.addFigure(triangle2);
	

	GeoFigura* rectangle1 = new Rectangle(3, 8); // Create first rectangle
	mainFigura.addFigure(rectangle1);
	

	GeoFigura* rectangle2 = new Rectangle(5, 7); // Create second rectangle
	mainFigura.addFigure(rectangle2);
	

	GeoFigura* circle = new Circle(5); // Create circle
	mainFigura.addFigure(circle);
	

	mainFigura.totalSquare();
}