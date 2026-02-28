#ifndef CELL_H
#define CELL_H

#include <string>

class Cell {
	private:
		float money; // ценность
		bool state=false; // состояние f-не занятно, t-занято
		std::string name="";
	public:
		Cell() {};
		float getMoney();
		void setMoney(float value);
		bool getState();
		void setState(bool st, std::string name);
		std::string getName();
		~Cell() {};
};

#endif
