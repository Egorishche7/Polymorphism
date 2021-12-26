#pragma once

#include "AbstractMilkProduct.h"
#include <iostream>

using namespace std;

enum class CheeseGranularity
{
    SMALL_GRANULARITY = 1,
    MEDIUM_GRANULARITY,
    BIG_GRANULARITY
};

enum class CheeseForm
{
    CYLINDER_CHEESE_FORM = 1,
    CUBE_CHEESE_FORM,
    NOT_FORMED_CHEESE_FORM
};

class Cheese :
    public AbstractMilkProduct
{
private:
    CheeseGranularity cheeseGranularity;
    CheeseForm cheeseForm;
    int packageWeight;
public:
    Cheese(double, string, string, CheeseGranularity, CheeseForm, int);
    CheeseGranularity getCheeseGranularity() const;
    CheeseForm getCheeseForm() const;
    int getPackageWeight() const;
    void setCheeseGranularity(const CheeseGranularity);
    void setCheeseForm(const CheeseForm);
    void setPackageWeight(const int);
    string getProductInfo() override;
};