#ifndef MACHINES_H
#define MACHINES_H

#include "Vehicle.h"

class Fly_Sea:public Army {
	protected:
	public:
		Fly_Sea();
		virtual ~Fly_Sea();
		virtual void moveForward(int s);
		virtual void moveBackward(int s);
		virtual void moveRight(int s);
		virtual void moveLeft(int s);
		virtual void moveDiagRight(int s);
		virtual void moveDiagLeft(int s);

};

class Earth:public Army {
        protected:
        public:
				Earth();
        		virtual ~Earth(); 
                virtual void moveForward(int s);
                virtual void moveBackward(int s);
                virtual void moveRight(int s);
                virtual void moveLeft(int s);

};

#endif
