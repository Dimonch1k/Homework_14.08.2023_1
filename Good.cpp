#include "Good.h"


Good::Good()
{
	name = "";
	price = 0.0;
	amount = 0;
}


Good::Good(string name, double price)
{
	this->name = name;
	this->price = price;
}


void Good::buyGood()
{
	cout << "The good was bought by someone.\n\n";
}



void Good::addAmount()
{
	amount++;
}
void Good::reduceAmount()
{
	amount = amount - 1;
}



string Good::getName()
{
	return name;
}

double Good::getPrice()
{
	return price;
}

int Good::getAmount()
{
	return amount;
}