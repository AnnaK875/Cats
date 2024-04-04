#ifndef Siamese_cat_h
#define Siamese_cat_h
#include "Feline.h"

using namespace std;

class siamese_cat :public feline
{
public:
	int age;
	string breed;
	string name;
	string eye_color;
	string fur_color;
	siamese_cat();
	int character();
	friend ostream& operator<<(ostream& os, const siamese_cat& cat);
	friend istream& operator>>(istream& is, siamese_cat& cat);
	int get_price();
};
#endif