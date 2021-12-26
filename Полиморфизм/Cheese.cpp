#pragma once

#include "Cheese.h"
#include <iostream>
#include <string>

using namespace std;

Cheese::Cheese(double fat, string producer, string dateOfMade, CheeseGranularity cheeseGranularity, CheeseForm cheeseForm, int packageWeight) :
    AbstractMilkProduct(fat, producer, dateOfMade)
{
    setCheeseGranularity(cheeseGranularity);
    setCheeseForm(cheeseForm);
    setPackageWeight(packageWeight);
}

CheeseGranularity Cheese::getCheeseGranularity() const
{
    return cheeseGranularity;
}

CheeseForm Cheese::getCheeseForm() const
{
    return cheeseForm;
}

int Cheese::getPackageWeight() const
{
    return packageWeight;
}

void Cheese::setCheeseGranularity(const CheeseGranularity cheeseGranularity)
{
    this->cheeseGranularity = cheeseGranularity;
}

void Cheese::setCheeseForm(const CheeseForm cheeseForm)
{
    this->cheeseForm = cheeseForm;
}

void Cheese::setPackageWeight(const int packageWeight)
{
    this->packageWeight = packageWeight;
}

string Cheese::getProductInfo()
{
    return "Cheese. Producer: " + getProducer()
        + " Fat: " + to_string((int)getFat()) + "." + to_string((int)getFat() * 10 % 10)
        + " Date of Made: " + getDateOfMade()
        + " Cheese Granularity: " + to_string((int)cheeseGranularity)
        + " Cheese Form: " + to_string((int)cheeseForm)
        + " Weight: " + to_string(packageWeight);
}