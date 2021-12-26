#pragma once

#include "Kefir.h"
#include <iostream>
#include <string>

using namespace std;

Kefir::Kefir(double fat, string producer, string dateOfMade, int packageVolume, string bacteriumName) :
    AbstractMilkProduct(fat, producer, dateOfMade)
{
    setPackageVolume(packageVolume);
    setBacteriumName(bacteriumName);
}

int Kefir::getPackageVolume() const
{
    return this->packageVolume;
}

string Kefir::getBacteriumName() const
{
    return this->bacteriumName;
}

void Kefir::setPackageVolume(const int packageVolume)
{
    this->packageVolume = packageVolume;
}

void Kefir::setBacteriumName(const string bacteriumName)
{
    this->bacteriumName = bacteriumName;
}

string Kefir::getProductInfo()
{
    return "Kefir. Producer: " + getProducer()
        + " Fat: " + to_string((int)getFat()) + "." + to_string((int)getFat() * 10 % 10)
        + " Date of Made: " + getDateOfMade()
        + " Package Volume: " + to_string(packageVolume)
        + " Bacterium Name: " + bacteriumName;
}