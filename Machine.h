#ifndef MACHINES_H
#define MACHINES_H

#include "Vehicle.h"

class Fly_Sea:public Vechnicle {
	protected:
	public:
		void moveForward(int s) override;
		void moveBackward(int s) override;
		void moveRight(int s) override;
		void moveLeft(int s) override;
		void moveDiagRight(int s) override;
		void moveDiagLeft(int s) override;

};

class Earth:public Vechnicle {
        protected:
        public:
                void moveForward(int s) override;
                void moveBackward(int s) override;
                void moveRight(int s) override;
                void moveLeft(int s) override;

};



#endif
