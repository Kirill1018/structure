#include "adapter.h"
void main()
{
	setlocale(LC_ALL, "ru");
	Price* price = new Adapter(new HryvnPrice);
	price->getCost();
	delete price;
}