#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vechnicle {
	protected:
		double weight; // вес
		int steps; // число шагов за ход
		float fuel; // топливо в %
		bool is_use; // живо-здорово
		double health; // хпшка 0-100
		double dangerous; // дэмэдж
		char type; // A or C

		std::string name; // имя
		int money; // число монет
	public:
		void setWeight(double weight) override;
		void setSteps(int steps) override;
		void setFuel(float fuel) override;
		void setISUSE(bool is_use) override;
		void setHealth(double health) override;
		void setDangerous(double dangerous) override;
		void setName(std::string name) override;
		void setMoney(int money) override;
		virtual void setType(char type)=0;


		double getWeight() override;
                int getSteps() override;
                float getFuel() override;
                bool getISUSE() override;
                double getHealth() override;
                double getDangerous() override;
		std::string getName() override;
                int getMoney() override;
		virtual char getType()=0;

		virtual ~Vehnicle() {}
};

class Civil:public Vechnicle {
	protected:
		int passengers; // пассажиры
	public:
		virtual ~Civil();
		void setType(char type) override;
		char getType() override;
		void setPassengers(int passengers) override;
		int getPassengers() override;
};

class Army:public Vechnicle {
        protected:
                bool muzzle; //наличие дула или ствола для выстрела
                bool warhead; //наличие трюма для выпуска боеголовки
                bool gun;     // наличие автоматического оружия(пулемёт)
                bool tactical_defence; //наличие тактической защиты
		int quan_muzzle;  // патроны ствола
                int quan_warhead; // патроны боеголовок
                int quan_gun;         // патроны пулемёта
                double quan_defence; // заряд тактической защиты в %
        public:
		Army();
    		virtual ~Army();
		void setType(char type) override;
   		char getType() override;

		void setMuzzle(bool muzzle) override;
		void setWarhead(bool warhead) override;
		void setGun(bool gun) override;
		void setTacticaldefence(bool tactical_defence) override;
		void setQuanMuzzle(int quan_muzzle) override;
		void setQuanWarhead(int quan_warhead) override;
		void setQuanGun(int quan_gun) override;
		void setQuanDefence(double quan_defence) override;

		bool getMuzzle() override;
		bool getWarhead() override;
		bool getGun() override;
		bool getTacticaldefence() override;
		int getQuanMuzzle() override;
		int getQuanWarhead() override;
		int getQuanGun() override;
		double getQuanDefence() override;
};


#endif
