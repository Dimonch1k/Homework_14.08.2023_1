#pragma once
#include <iostream>
using namespace std;


#include "Good.h"
class Food :
    public Good
{
public:  
    void buyGood() override;
};

