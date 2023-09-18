#pragma once
#include <iostream>
using namespace std;


class Good
{
private:
	string name;
	double price;
	int amount;

public:
	Good();
	Good(string name, double price);

	virtual void buyGood();

	void addAmount();
	void reduceAmount();

	string getName();
	double getPrice();
	int getAmount();
};

