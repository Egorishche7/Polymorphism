#pragma once

#include <iostream>

using namespace std;

class AbstractMilkProduct
{
protected:
	double fat;
	string producer;
	string dateOfMade;
public:
	AbstractMilkProduct(double, string, string);
	double getFat() const;
	string getProducer() const;
	string getDateOfMade() const;
	void setFat(const double);
	void setProducer(const string);
	void setDateOfMade(const string);
	virtual string getProductInfo() = 0;
};