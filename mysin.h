#ifndef MYSIN_H
#define MYSIN_H
#include <string>
#include <iostream>


class MySin{ /**klasa mySIN*/
	public: /**metoda publiczna*/
	/**1*/
		MySin();
		/**2*/
		MySin(double x);
		/**3*/
		MySin(const MySin &obj);
		/**4*/
		~MySin();
		/**5*/
		double value();
		/**6*/
		void setX(double);
		/**7*/
		double getX();
		/**metoda prywatna*/
		private: double mX(); 
	};
	#endif //MYSIN_H