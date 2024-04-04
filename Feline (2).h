#ifndef Feline_h
#define Feline_h
#include "Mammal.h"

class feline : public mammal
{
public:
	string type_of_the_cats_fur;
	int activity;
	int amiability;
	feline();
	void fur(string* type);
	void feed();

};
#endif