#include "Feline.h"

void feline::fur(string* type)
{
	cin >> *type;
	type_of_the_cats_fur = *type;
}

void feline::feed() 
{
	cout << "\n\nCat's feed if meat, poultry, fish and grains";
}

feline::feline() 
{
	type_of_the_cats_fur = "shortfur";
	activity = 6;
	amiability = 7;
}