#include <iostream>

class Vechnicle {
	protected:
		double weight;
		int drivers;
		int steps;
		float fuel;
		bool is_use=true;
		double health;
		int dangerous;
	public:
		virtual bool setWeight(double weight)=0;
		virtual bool setDrivers(int drivers)=0;
		virtual bool setSteps(int steps)=0;
		virtual bool setHealth(double health)=0;
		virtual bool setFuel(float fuel)=0;
		virtual bool setDangerous(int dangerous)=0;
};

class Civil {
	protected:
		
	public:
		bool setDangerous(1) {
			this->dangerous=1;
			if(this->dangerous==1) return true;
			else
		}

};
