#include <iostream>
#include "Persian_color_point.h"
#include "Tonkinese.h"
#include "Balinese.h"
#include "Money.h"

int main()
{
	tonkinese tonkinese_cat;
	cout << "Enter the name and the age of the tonkinese cat\n";
	cin >> tonkinese_cat;
	tonkinese_cat.habitat();
	cout << tonkinese_cat;
	tonkinese_cat.feed();
	money price_t(tonkinese_cat.get_price());
	cout << "\n\nCat's price is "<<price_t;
	money markup_t = price_t.markup();
	cout << "Markup is " << markup_t;
	money discount_t = price_t.discount();
	cout << "Discount is " << discount_t;
	money final_price_t(price_t + markup_t - discount_t);
	cout << "Tonkinese cat's final price is " << final_price_t;

	persian_color_point persian_cat;
	cout << "\n\nEnter the name and the age of the persian cat\n";
	cin >> persian_cat;
	persian_cat.habitat();
	cout << persian_cat;
	persian_cat.feed();
	money price_p(persian_cat.get_price());
	cout << "\n\nCat's price is " << price_t;
	money markup_p = price_p.markup();
	cout << "Markup is " << markup_p;
	money discount_p = price_p.discount();
	cout << "Discount is " << discount_p;
	money final_price_p(price_p + markup_p - discount_p);
	cout << "Persian cat's final price is " << final_price_p;

	balinese balinese_cat;
	cout << "\n\nEnter the name and the age of the balinese cat\n";
	cin >> balinese_cat;
	balinese_cat.habitat();
	cout << balinese_cat;
	balinese_cat.feed();
	money price_b(balinese_cat.get_price());
	cout << "\n\nCat's price is " << price_t;
	money markup_b = price_b.markup();
	cout << "Markup is " << markup_b;
	money discount_b = price_b.discount();
	cout << "Discount is " << discount_b;
	money final_price_b(price_p + markup_b - discount_b);
	cout << "Balinese cat's final price is " << final_price_b;
}
