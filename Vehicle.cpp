#include "Vehicle.h"
#include <iostream>

Vechnicle::~Vehnicle() {}
void Vechnicle::setWeight(double weight) {
	this->weight=weight;
}

void Vechnicle::setSteps(int steps) {
        this->steps=steps;
}

void Vechnicle::setFuel(float fuel) {
        this->fuel=fuel;
}

void Vechnicle::setISUSE(bool is_use) {
        this->is_use=is_use;
}

void Vechnicle::setHealth(double health) {
        this->health=health;
}

void Vechnicle::setDangerous(double dangerous) {
        this->dangerous=dangerous;
}

void Vechnicle::setName(std::string name) {
        this->name=name;
}

void Vechnicle::setMoney(int money) {
        this->money=money;
}

double Vechnicle::getWeight() {
	return this->weight;
}

int Vechnicle::getSteps() {
    	return this->steps;
}

float Vechnicle::getFuel() {
    	return this->fuel;
}

bool Vechnicle::getISUSE() {
    	return this->is_use;
}

double Vechnicle::getHealth() {
    	return this->health;
}

double Vechnicle::getDangerous() {
    	return this->dangerous;
}

std::string Vechnicle::getName() {
    	return this->name;
}

int Vechnicle::getMoney() {
    	return this->money;
}

Civil::~Civil() {}


void Civil::setType(char type) {
    	this->type = 'C';
}

char Civil::getType() {
    	return this->type;
}

void Civil::setPassengers(int passengers) {
	this->passengers=passengers;
}
int Civil::getPassengers() {
	return this->passengers
}

Army::~Army() {}

void Army::setType(char type) {
    	this->type = 'A';
}

char Army::getType() {
    	return this->type;
}
