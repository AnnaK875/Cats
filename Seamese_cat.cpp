#include "Siamese_cat.h"

siamese_cat::siamese_cat() 
{
	eye_color = "Blue";
	fur_color = "The fur on the body is light, on the ears, tail, paws and muzzle - dark";
	breed = "Siamese cat";
	name = " - ";
	age = 0;
}

int siamese_cat::character() 
{
	activity = 9;
	amiability = 9;
	return activity, amiability;
}

ostream& operator<<(ostream& os, const siamese_cat& cat) 
{
	os << "\nCat's name is " << cat.name << "\nIt is " << cat.age << " years old"
		<< "\n\nIt's breed is " << cat.breed
		<< "\nIt's type of fur is " << cat.type_of_the_cats_fur<< ". "<<cat.fur_color<<". \nEye color is "<< cat.eye_color
		<< "\n\nThat cat gets " << cat.activity << " points of activity and " << cat.amiability << " and points of amiability";
	return os;
}

istream& operator>>(istream& is, siamese_cat& cat)
{
	string name;
	int age;
	is >> name >> age;
	cat.name = name;
	cat.age = age;
	return is;
}

int siamese_cat::get_price()
{
	return this->price;
}