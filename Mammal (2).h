#ifndef Mammal_h
#define Mammal_h
#include "Animals.h"

class mammal: public animals
{
private:
	bool warm_blooded; //есть какая-то неубиваемая хладнокровная млекопитающая животинка, похожая на крысу
public:
	void feed();
	void habitat();
};
#endif