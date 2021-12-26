#pragma once

#include "AbstractMilkProduct.h"
#include <iostream>

using namespace std;

class Kefir :
    public AbstractMilkProduct
{
private:
    int packageVolume;
    string bacteriumName;
public:
    Kefir(double, string, string, int, string);
    int getPackageVolume() const;
    string getBacteriumName() const;
    void setPackageVolume(const int);
    void setBacteriumName(const string);
    string getProductInfo() override;
};