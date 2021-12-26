#include <iostream>
#include "AbstractMilkProduct.h"
#include "Cheese.h"
#include "Kefir.h"
#include "Milk.h"

using namespace std;

int main()
{
	AbstractMilkProduct* productArray[5];

	productArray[0] = new Cheese(5.0, "Khutorok", "20.10.2021", CheeseGranularity::MEDIUM_GRANULARITY, CheeseForm::CYLINDER_CHEESE_FORM, 700);
	productArray[1] = new Kefir(2.5, "Bifitat", "13.10.2021", 950, "Bulgarica");
	productArray[2] = new Milk(3.5, "Sofiyka", "14.11.2021", 1000, 5.8, true);
	productArray[3] = new Kefir(1.5, "Bifidin", "18.10.2021", 500, "Activia");
	productArray[4] = new Cheese(8.0, "Prostokvashino", "12.12.2021", CheeseGranularity::MEDIUM_GRANULARITY, CheeseForm::CUBE_CHEESE_FORM, 350);

	for (int i = 0; i < 5; i++)
		cout << productArray[i]->getProductInfo() << endl;
	for (int i = 0; i < 5; i++)
	{
		delete  productArray[i];
		productArray[i] = NULL;
	}

	return 0;
}