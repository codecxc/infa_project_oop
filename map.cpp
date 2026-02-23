#include <iostream>
#include <cstdlib>
#include <ctime>

float rando=1;
class Cell {
	private:
		float money; // ценность
		bool state=false; // состояние f-не занятно, t-занято
		std::string name="";
	public:
		Cell() {};
		float getMoney() {return this->money;}
		void setMoney(float value) {this->money=value;}
		bool getState() {return this->state;}
		void setState(bool st, std::string name) {this->state=st;this->name=name;}
		std::string getName() {return this->name;}
		~Cell() {};
};

int randInt() {
    	return rand()%10;
}
void initRandom() {
    	srand(time(nullptr));
}

Cell** generateMap(int n) {
	Cell** map=new Cell*[n];
	for(int i=0;i<n;++i) {
		map[i]=new Cell[n];
		for(int j=0;j<n;++j) {
			map[i][j].setMoney(randInt());

		}
	}
	return map;
}

void printMap(Cell** map, int n) {
	for(int i=0;i<n;++i) {
		for(int j=0;j<n;++j) {
			if(map[i][j].getState()==false) {
            			std::cout<<map[i][j].getMoney()<<" ";
			} else {std::cout<<map[i][j].getName()<<" ";}
        	}
		std::cout<<std::endl;
	}

}

int main() {
	Cell** a=generateMap(10);
	printMap(a,10);

}
