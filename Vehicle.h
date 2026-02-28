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
		virtual void setWeight(double weight);
		virtual void setSteps(int steps);
		virtual void setFuel(float fuel);
		virtual void setISUSE(bool is_use);
		virtual void setHealth(double health);
		virtual void setDangerous(double dangerous);
		virtual void setName(std::string name);
		virtual void setMoney(int money);
		virtual void setType(char type)=0;


		virtual double getWeight();
        virtual int getSteps();
        virtual float getFuel();
        virtual bool getISUSE();
        virtual double getHealth();
        virtual double getDangerous();
		virtual std::string getName();
        virtual int getMoney();
		virtual char getType()=0;

		virtual ~Vechnicle() {}
};

class Civil:public Vechnicle {
	protected:
		int passengers; // пассажиры
	public:
		virtual ~Civil();
		void setType(char type) override;
		char getType() override;
		virtual void setPassengers(int passengers);
		virtual int getPassengers();
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
				int passengers; // пассажиры
        public:
				Army();
    			virtual ~Army();
				void setType(char type) override;
   				char getType() override;


				virtual void setPassengers(int passengers);
				virtual int getPassengers();
				virtual void setMuzzle(bool muzzle);
				virtual void setWarhead(bool warhead);
				virtual void setGun(bool gun);
				virtual void setTacticaldefence(bool tactical_defence);
				virtual void setQuanMuzzle(int quan_muzzle);
				virtual void setQuanWarhead(int quan_warhead);
				virtual void setQuanGun(int quan_gun);
				virtual void setQuanDefence(double quan_defence);

				virtual bool getMuzzle();
				virtual bool getWarhead();
				virtual bool getGun();
				virtual bool getTacticaldefence();
				virtual int getQuanMuzzle();
				virtual int getQuanWarhead();
				virtual int getQuanGun();
				virtual double getQuanDefence();
};


#endif