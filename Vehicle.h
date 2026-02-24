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

		
		virtual void setMuzzle(bool muzzle)=0;
		virtual void setWarhead(bool warhead)=0;
		virtual void setGun(bool gun)=0;
		virtual void setTacticaldefence(bool tactical_defence)=0;
		virtual void setQuanMuzzle(int quan_muzzle)=0;
		virtual void setQuanWarhead(int quan_warhead)=0;
		virtual void setQuanGun(int quan_gun)=0;
		virtual void setQuanDefence(double quan_defence)=0;
		
		virtual bool getMuzzle()=0;
                virtual bool getWarhead()=0;
                virtual bool getGun()=0;
                virtual bool getTacticaldefence()=0;
                virtual int getQuanMuzzle()=0;
                virtual int getQuanWarhead()=0;
                virtual int getQuanGun()=0;
                virtual double getQuanDefence()=0;
};


#endif
