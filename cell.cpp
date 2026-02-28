#include <iostream>
#include <cstdlib>
#include <ctime>
#include "cell.h"

float rando=1;

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
            } else {
                std::cout<<map[i][j].getName()<<" ";
            }
        }
        std::cout<<std::endl;
    }
}

float Cell::getMoney() {
    return this->money;
}

void Cell::setMoney(float value) {
    this->money=value;
}

bool Cell::getState() {
    return this->state;
}

void Cell::setState(bool st, std::string name) {
    this->state=st;
    this->name=name;
}

std::string Cell::getName() {
    return this->name;
}
