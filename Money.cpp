#include "Money.h"

money::money(int val) 
{
    this->value = val;
}

money money::operator +(const money& b) const 
{
    int sum = this->value + b.value;
    return money(sum);
}

money money::operator -(const money& b) const
{
    int sum = this->value - b.value;
    return money(sum);
}


money money::markup() 
{
    int m = this->value * 0.11;
    return money(m);
}

money money::discount()
{
    int d = this->value * 0.05;
    return money(d);
}

ostream& operator<<(ostream& os, const money& a)
{
    os << a.value << "\n";
    return os;
}