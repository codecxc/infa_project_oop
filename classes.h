#ifndef CLASSES_H
#define CLASSES_H

#include "Machine.h"

class BTR: public Earth, public Army{
	private:
		const int capacity = 20;
		int currentTroops; 
	public:
		BTR(){
			std::cout << "for the Imperor!~!~!~!~!" << std::endl;
			this->currentTroops = 0;
			setMuzzle(true);
		}

		void loadTroops(int count) override{
			if(count <0 || count > 20){
				std::cout << "некорректный приказ по заполнению состава!" << std::endl;
				return;
			}
			
			if(currentTroops + count <20 ){
				std::cout << "заполнение произведено!" << std::endl;
				this->currentTroops += count;
			}
			else{std::cout << "невозможно выполнить приказ!" << std::endl;}

		};

		void unloadTroops(){
			if(this->currentTroops >0){
				std::cout << "производим выгрузку!"<<  std::endl;
				this->currentTroops = 0;
			}
			else{std::cout << "отсутствует экипаж для высадки!" << std::endl;}

		}; 
		
		void shoot_gun(){
			if(getGun()){
				if(getQuanGun() > 0){
						std::cout << "производим выстрелы!" << std::endl;
						setQuanGun(getQuanGun() -5);
				}
				else{
					std::cout <<"отсутствуют патроны!" << std::endl;
				}
			}
			else{std::cout << "у нас отсутсвтует пулемёт!" << std::endl;}
		}
		
		int getCurrentTroops() { return currentTroops; }

		int getFreeSlots() { return capacity - currentTroops; }
		
		void repair() { setHealth(100); }
		
		void refuel() { setFuel(100); }
		
		void recharge_defence() {
    		setQuanDefence(100);
    		std::cout << "защита перезаряжена!" << std::endl;
		}

		void shoot_muzzle() {
   			if(getMuzzle() && getQuanMuzzle() > 0) {
        		std::cout << "выстрел из дула!" << std::endl;
        		setQuanMuzzle(getQuanMuzzle() - 1);
    		} 
			else {
        		std::cout << "нет снарядов для дула!" << std::endl;
    		}
		}
};

class LADA:public Civil, public Earth{
	private:
		int price = 500000;
	public:
	LADA() {
        std::cout << "Лада создана!" << std::endl;
        setType('C');
    }
	
	void showPrice() {
        std::cout << "Цена Лады: " << price << " рублей" << std::endl;
    }

	int getPrice() { 
        return price; 
    }

	void setPrice(int newPrice) {
        if(newPrice > 0) {
            price = newPrice;
            std::cout << "Новая цена: " << price << " рублей" << std::endl;
        }
    }

	void addPassenger() {
        setPassengers(getPassengers() + 1);
        std::cout << "Пассажиров: " << getPassengers() << std::endl;
    }


};

class AURUS: public Civil, public Earth {
private:
    const int trunkCapacity = 15;
    int currentCargo = 0;
    int price = 25000000;
    bool armor = true;
    
public:
    AURUS() {
        std::cout << "Создан автомобиль AURUS - президентский лимузин" << std::endl;
        std::cout << "На таких машинах ездят президенты" << std::endl;
        this->setType('C');
        this->setHealth(200);
    }
    
    void showPrice() {
        std::cout << "Цена: " << this->price << " рублей" << std::endl;
    }
    
    int getPrice() { 
        return this->price; 
    }
    
    void loadCargo(int amount) {
        if(this->currentCargo + amount <= this->trunkCapacity) {
            this->currentCargo += amount;
        }
    }
    
    void unloadCargo() {
        this->currentCargo = 0;
    }
    
    void addPassenger() {
        this->setPassengers(this->getPassengers() + 1);
    }
    
    void activateArmor() {
        if(this->armor) {
            std::cout << "Броня активирована" << std::endl;
        }
    }
    
    int getFreeSpace() { 
        return this->trunkCapacity - this->currentCargo; 
    }
};

class TU214: public Civil, public Fly_Sea {
private:
    const int maxPassengers = 210;
    int currentPassengers = 0;
    int flightAltitude = 0;
    
public:
    TU214() {
        std::cout << "ТУ-214 создан! Наследие Туполева" << std::endl;
        this->setType('C');
    }
    
    void takeoff() {
        std::cout << "ТУ-214 взлетает!" << std::endl;
        this->flightAltitude = 11000;
    }
    
    void land() {
        std::cout << "ТУ-214 совершает посадку" << std::endl;
        this->flightAltitude = 0;
    }
    
    void boardPassengers(int count) {
        if(this->currentPassengers + count <= this->maxPassengers) {
            this->currentPassengers += count;
            this->setPassengers(this->currentPassengers);
        }
    }
    
    int getFlightAltitude() {
        return this->flightAltitude;
    }
};

class SU24: public Army, public Fly_Sea {
private:
    int bombs = 500;
    int missiles = 200;
    
public:
    SU24() {
        std::cout << "СУ-24 заступает на боевое дежурство!" << std::endl;
        std::cout << "Этот самолёт отбомбил в Сирии много террористов" << std::endl;
        this->setType('A');
        this->setHealth(100);
    }
    
    void bomb() {
        if(this->bombs > 0) {
            std::cout << "Сброс бомб! БАМ-БАМ-БАМ!" << std::endl;
            this->bombs -= 50;
        }
    }
    
    void shoot_missile() {
        if(this->missiles > 0) {
            std::cout << "Пуск ракеты! Цель поражена" << std::endl;
            this->missiles -= 10;
        }
    }
    
   
};
#endif 
