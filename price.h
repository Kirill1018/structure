#pragma once
#include "hryvn price.h"
class Price
{
public:
	virtual ~Price() {};
	virtual double getCost() = 0;//цена
};