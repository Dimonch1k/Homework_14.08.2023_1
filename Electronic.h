#pragma once
#include <iostream>
using namespace std;


#include "Good.h"
class Electronic :
    public Good
{
public:
    void buyGood() override;
};

