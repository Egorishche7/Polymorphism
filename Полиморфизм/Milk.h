#pragma once

#include "AbstractMilkProduct.h"
#include <iostream>

using namespace std;

class Milk :
    public AbstractMilkProduct
{
private:
    int packageVolume;
    double protein;
    bool isPasteurized;
public:
    Milk(double, string, string, int, double, bool);
    int getPackageVolume() const;
    double getProtein() const;
    bool getIsPasteurized() const;
    void setPackageVolume(const int);
    void setProtein(const double);
    void setIsPasteurized(const bool);
    string getProductInfo() override;
};