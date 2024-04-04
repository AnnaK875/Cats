#ifndef Money_h
#define Money_h
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class money 
{
private:
	int value;
public:
	money operator +(const money& b) const;
	money operator -(const money& b) const;
	money markup();
	money discount();
	money(int val);
	friend ostream& operator <<(ostream& os, const money& a);
};
#endif