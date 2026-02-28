#ifndef CLASSES_H
#define CLASSES_H

#include "Machine.h"

class BTR: public Earth, public Army {
private:
    const int capacity = 20;
    int currentTroops; 
public:
    BTR();
    void loadTroops(int count) override;
    void unloadTroops();
    void shoot_gun();
    int getCurrentTroops();
    int getFreeSlots();
    void repair();
    void refuel();
    void recharge_defence();
    void shoot_muzzle();
};

class LADA: public Civil, public Earth {
private:
    int price = 500000;
public:
    LADA();
    void showPrice();
    int getPrice();
    void setPrice(int newPrice);
    void addPassenger();
};

class AURUS: public Civil, public Earth {
private:
    const int trunkCapacity = 15;
    int currentCargo = 0;
    int price = 25000000;
    bool armor = true;
public:
    AURUS();
    void showPrice();
    int getPrice();
    void loadCargo(int amount);
    void unloadCargo();
    void addPassenger();
    void activateArmor();
    int getFreeSpace();
};

class TU214: public Civil, public Fly_Sea {
private:
    const int maxPassengers = 210;
    int currentPassengers = 0;
    int flightAltitude = 0;
public:
    TU214();
    void takeoff();
    void land();
    void boardPassengers(int count);
    int getFlightAltitude();
};

class SU24: public Army, public Fly_Sea {
private:
    int bombs = 500;
    int missiles = 200;
public:
    SU24();
    void bomb();
    void shoot_missile();
};

#endif