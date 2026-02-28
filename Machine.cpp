#include "Machine.h"
#include <iostream>

Earth::Earth() {}

Fly_Sea::Fly_Sea() {}

Earth::~Earth() {}

Fly_Sea::~Fly_Sea() {}

void Earth::moveForward(int s) {
	std::cout<<s;
}

void Earth::moveBackward(int s) {
	std::cout<<s;
}

void Earth::moveRight(int s) {
	std::cout<<s;
}

void Earth::moveLeft(int s) {
	std::cout<<s;
}

void Fly_Sea::moveForward(int s) {
	std::cout<<s;
}

void Fly_Sea::moveBackward(int s) {
	std::cout<<s;
}

void Fly_Sea::moveRight(int s) {
	std::cout<<s;
}

void Fly_Sea::moveLeft(int s) {
	std::cout<<s;
}

void Fly_Sea::moveDiagRight(int s) {
	std::cout<<s;
}

void Fly_Sea::moveDiagLeft(int s) {
	std::cout<<s;
}
