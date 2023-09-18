#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Good.h"
class Basket : 
	public Good
{
private:
	vector<Good> goods;

public:
	Basket(vector<Good> goods);

	string addGood(Good& good);
	void reduceGood(Good& good);

	void displayAllGoods();
};

