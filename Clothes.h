#pragma once
#include <iostream>
using namespace std;


#include "Good.h"
class Clothes :
    public Good
{
public:
    void buyGood() override;
};

