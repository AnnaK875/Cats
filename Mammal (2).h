#ifndef Mammal_h
#define Mammal_h
#include "Animals.h"

class mammal: public animals
{
private:
	bool warm_blooded; //���� �����-�� ����������� ������������� ������������� ���������, ������� �� �����
public:
	void feed();
	void habitat();
};
#endif