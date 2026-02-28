#include <iostream>
#include "classes.h"
#include "cell.h"
int main() {
	BTR* btr=new BTR();
	LADA* lada=new LADA();
	AURUS* aurus=new AURUS();
	TU214* tu214=new TU214();
	SU24* su24=new SU24();
	su24->setSteps(24);
	tu214->setWeight(24000);
	aurus->setFuel(99.2);
	lada->setISUSE(false);
	btr->setDangerous(13.4);
	btr->loadTroops(14);
	lada->setPrice(550000);
	aurus->loadCargo(5);
	tu214->boardPassengers(150);
	std::cout<<su24->getSteps()<<std::endl;
	std::cout<<tu214->getWeight()<<std::endl;
	delete btr;
    	delete lada;
    	delete aurus;
    	delete tu214;
    	delete su24;

}
