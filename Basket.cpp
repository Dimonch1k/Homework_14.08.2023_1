#include "Basket.h"


Basket::Basket(vector<Good> goods)
{
	goods = vector<Good>();
}



string Basket::addGood(Good& good)
{
	goods.push_back(good);
	addAmount();
	return "The good was successfully added.\n\n";
}


void Basket::reduceGood(Good& good)
{
	for (int i = 0; i < goods.size(); i++)
	{
		if (good.getName() == goods[i].getName()
			&& good.getAmount() == goods[i].getAmount()
			&& good.getPrice() == goods[i].getPrice())
		{
			reduceAmount();
			goods[i].buyGood();
			goods.erase(goods.begin() + i);
			return;
		}
	}
	cout << "There isn't the good in basket with this parametrs!!!\n\n";
}
    

void Basket::displayAllGoods()
{
	cout << "All Goods:\n\n";

	for (int i = 0; i < goods.size(); i++)
	{
		cout << "\t" << i + 1 << " Good:\n";
		cout << "\tName: " << goods[i].getName();
		cout << "\n\tPrice: " << goods[i].getPrice() << "\n\n";
	}
	cout << "Amount of goods is: " << getAmount() << "\n\n\n";
}