#pragma once

#include "AbstractMilkProduct.h"
#include <iostream>

using namespace std;

AbstractMilkProduct::AbstractMilkProduct(double fat, string producer, string dateOfMade)
{
	setFat(fat);
	setProducer(producer);
	setDateOfMade(dateOfMade);
}

double AbstractMilkProduct::getFat() const
{
	return this->fat;
}

string AbstractMilkProduct::getProducer() const
{
	return this->producer;
}

string AbstractMilkProduct::getDateOfMade() const
{
	return this->dateOfMade;
}

void AbstractMilkProduct::setFat(const double fat)
{
	this->fat = fat;
}

void AbstractMilkProduct::setProducer(const string producer)
{
	this->producer = producer;
}

void AbstractMilkProduct::setDateOfMade(const string dateOfMade)
{
	this->dateOfMade = dateOfMade;
}