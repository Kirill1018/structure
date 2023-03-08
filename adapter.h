#pragma once
#include "price.h"
class Adapter : public Price
{
public:
	Adapter (HryvnPrice* price) : price_hryvnprice(price){}
	~Adapter() { delete price_hryvnprice; }
	double getCost()
	{
		SetColor(1, 0);
		cout << "апельсин. цена в рублях = " << price_hryvnprice->hryvn_cost_for_an_orange_thing * 2 << " за штуку" << endl;
		SetColor(2, 0);
		cout << "сыр. цена в рублях = " << price_hryvnprice->hryvn_cost_for_cheese_kilogram * 2 << " за килограмм" << endl;
		SetColor(3, 0);
		cout << "рыба. цена в рублях = " << price_hryvnprice->hryvn_cost_for_fish_kilogram * 2 << " за килограмм" << endl;
		SetColor(4, 0);
		cout << "орехи. цена в рублях = " << price_hryvnprice->hryvn_cost_for_kilogram_of_nuts * 2 << " за килограмм" << endl;
		SetColor(5, 0);
		cout << "апельсиновый сок. цена в рублях = " << price_hryvnprice->hryvn_cost_for_lit_of_orange_juice * 2 << " за литр" << endl;
		SetColor(6, 0);
		cout << "молоко. цена в рублях = " << price_hryvnprice->hryvn_cost_for_milk_lit * 2 << " за литр" << endl;
		SetColor(7, 0);
		cout << "чай. цена в рублях = " << price_hryvnprice->hryvn_cost_for_tea_lit * 2 << " за литр" << endl;
		SetColor(8, 0);
		cout << "хлеб. цена в рублях = " << price_hryvnprice->hryvn_cost_for_the_bread_thing * 2 << " за упаковку" << endl;
		SetColor(9, 0);
		cout << "пшеничный блин. цена в рублях = " << price_hryvnprice->hryvn_cost_for_the_crepe_thing * 2 << " за штуку";
		return price_hryvnprice->hryvn_cost_for_the_crepe_thing * 2;
	}
private:
	HryvnPrice* price_hryvnprice;
};