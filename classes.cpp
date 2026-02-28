#include "classes.h"
#include <iostream>

BTR::BTR() {
    std::cout << "for the Imperor!~!~!~!~!" << std::endl;
    this->currentTroops = 0;
    setMuzzle(true);
}

void BTR::loadTroops(int count) {
    if(count < 0 || count > 20) {
        std::cout << "некорректный приказ по заполнению состава!" << std::endl;
        return;
    }
    
    if(currentTroops + count < 20) {
        std::cout << "заполнение произведено!" << std::endl;
        this->currentTroops += count;
    } else {
        std::cout << "невозможно выполнить приказ!" << std::endl;
    }
}

void BTR::unloadTroops() {
    if(this->currentTroops > 0) {
        std::cout << "производим выгрузку!" << std::endl;
        this->currentTroops = 0;
    } else {
        std::cout << "отсутствует экипаж для высадки!" << std::endl;
    }
}

void BTR::shoot_gun() {
    if(getGun()) {
        if(getQuanGun() > 0) {
            std::cout << "производим выстрелы!" << std::endl;
            setQuanGun(getQuanGun() - 5);
        } else {
            std::cout << "отсутствуют патроны!" << std::endl;
        }
    } else {
        std::cout << "у нас отсутсвтует пулемёт!" << std::endl;
    }
}

int BTR::getCurrentTroops() {
    return currentTroops;
}

int BTR::getFreeSlots() {
    return capacity - currentTroops;
}

void BTR::repair() {
    setHealth(100);
}

void BTR::refuel() {
    setFuel(100);
}

void BTR::recharge_defence() {
    setQuanDefence(100);
    std::cout << "защита перезаряжена!" << std::endl;
}

void BTR::shoot_muzzle() {
    if(getMuzzle() && getQuanMuzzle() > 0) {
        std::cout << "выстрел из дула!" << std::endl;
        setQuanMuzzle(getQuanMuzzle() - 1);
    } else {
        std::cout << "нет снарядов для дула!" << std::endl;
    }
}

LADA::LADA() {
    std::cout << "Лада создана!" << std::endl;
    setType('C');
}

void LADA::showPrice() {
    std::cout << "Цена Лады: " << price << " рублей" << std::endl;
}

int LADA::getPrice() {
    return price;
}

void LADA::setPrice(int newPrice) {
    if(newPrice > 0) {
        price = newPrice;
        std::cout << "Новая цена: " << price << " рублей" << std::endl;
    }
}

void LADA::addPassenger() {
    setPassengers(getPassengers() + 1);
    std::cout << "Пассажиров: " << getPassengers() << std::endl;
}

AURUS::AURUS() {
    std::cout << "Создан автомобиль AURUS - президентский лимузин" << std::endl;
    std::cout << "На таких машинах ездят президенты" << std::endl;
    this->setType('C');
    this->setHealth(200);
}

void AURUS::showPrice() {
    std::cout << "Цена: " << this->price << " рублей" << std::endl;
}

int AURUS::getPrice() {
    return this->price;
}

void AURUS::loadCargo(int amount) {
    if(this->currentCargo + amount <= this->trunkCapacity) {
        this->currentCargo += amount;
    }
}

void AURUS::unloadCargo() {
    this->currentCargo = 0;
}

void AURUS::addPassenger() {
    this->setPassengers(this->getPassengers() + 1);
}

void AURUS::activateArmor() {
    if(this->armor) {
        std::cout << "Броня активирована" << std::endl;
    }
}

int AURUS::getFreeSpace() {
    return this->trunkCapacity - this->currentCargo;
}

TU214::TU214() {
    std::cout << "ТУ-214 создан! Наследие Туполева" << std::endl;
    this->setType('C');
}

void TU214::takeoff() {
    std::cout << "ТУ-214 взлетает!" << std::endl;
    this->flightAltitude = 11000;
}

void TU214::land() {
    std::cout << "ТУ-214 совершает посадку" << std::endl;
    this->flightAltitude = 0;
}

void TU214::boardPassengers(int count) {
    if(this->currentPassengers + count <= this->maxPassengers) {
        this->currentPassengers += count;
        this->setPassengers(this->currentPassengers);
    }
}

int TU214::getFlightAltitude() {
    return this->flightAltitude;
}

SU24::SU24() {
    std::cout << "СУ-24 заступает на боевое дежурство!" << std::endl;
    std::cout << "Этот самолёт отбомбил в Сирии много террористов" << std::endl;
    this->setType('A');
    this->setHealth(100);
}

void SU24::bomb() {
    if(this->bombs > 0) {
        std::cout << "Сброс бомб! БАМ-БАМ-БАМ!" << std::endl;
        this->bombs -= 50;
    }
}

void SU24::shoot_missile() {
    if(this->missiles > 0) {
        std::cout << "Пуск ракеты! Цель поражена" << std::endl;
        this->missiles -= 10;
    }
}