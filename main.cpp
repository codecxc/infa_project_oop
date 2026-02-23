#include <iostream>

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
		virtual void setWeight(double weight)=0;
		virtual void setSteps(int steps)=0;
		virtual void setFuel(float fuel)=0;
		virtual	void setISUSE(bool is_use)=0;
		virtual void setHealth(double health)=0;
		virtual	void setDangerous(double dangerous)=0;
		virtual void setName(std::string name)=0;
		virtual void setMoney(int money)=0;
		virtual void setType(char type)=0;


		virtual double getWeight()=0;
                virtual int getSteps()=0;
                virtual float getFuel()=0;
                virtual bool getISUSE()=0;
                virtual double getHealth()=0;
                virtual double getDangerous()=0;
		virtual std::string getName()=0;
                virtual int getMoney()=0;
		virtual char getType()=0;
};

class Civil:public Vechnicle {
	protected:
		int passengers; // пассажиры
	public:
		Civil() {
			this->dangerous=5.5;
		}
		double getDangerous() {return this->dangerous;}
		void setType('C') {this->type='C';}
		char getType() {return this->type;}
		virtual void setPassengers(int passengers)=0;
		virtual int getPassengers()=0;
		~Civil();
};

class Army:public Vechnicle {
        protected:
                bool muzzle; //наличие дула или ствола для выстрела
                bool warhead; //наличие трюма для выпуска боеголовки
                bool gun;     // наличие автоматического оружия(пулемёт)
                bool tactical_defence; //наличие тактической защиты
		int quan_muzzle = 0;  // патроны ствола
                int quan_warhead = 0; // патроны боеголовок
                int quan_gun = 0;         // патроны пулемёта
                double quan_defence = 0; // заряд тактической защиты в %
        public:

		void setType('A') {this->type='A';}
                char getType() {return this->type;}
		
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

