#pragma once

#include "Milk.h"
#include <iostream>
#include <string>

using namespace std;

Milk::Milk(double fat, string producer, string dateOfMade, int packageVolume, double protein, bool isPasteurized) :
    AbstractMilkProduct(fat, producer, dateOfMade)
{
    setPackageVolume(packageVolume);
    setProtein(protein);
    setIsPasteurized(isPasteurized);
}

int Milk::getPackageVolume() const
{
    return this->packageVolume;
}

double Milk::getProtein() const
{
    return this->packageVolume;
}

bool Milk::getIsPasteurized() const
{
    return this->isPasteurized;
}

void Milk::setPackageVolume(const int packageVolume)
{
    this->packageVolume = packageVolume;
}

void Milk::setProtein(const double protein)
{
    this->protein = protein;
}

void Milk::setIsPasteurized(const bool isPasteurized)
{
    this->isPasteurized = isPasteurized;
}

string Milk::getProductInfo()
{
    return "Milk. Producer: " + getProducer()
        + " Fat: " + to_string((int)getFat()) + "." + to_string((int)getFat() * 10 % 10)
        + " Date of Made: " + getDateOfMade()
        + " Package Volume: " + to_string(packageVolume)
        + " Protein: " + to_string((int)protein) + "." + to_string((int)protein * 10 % 10)
        + " Pasteurized: " + to_string(isPasteurized);
}