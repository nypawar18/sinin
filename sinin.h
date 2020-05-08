/*
 * sinin.h
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */

#ifndef SININ_H_
#define SININ_H_

class Area{
	int rad=2;
	static float PI;
public:

	void calarea(void){
		cout<<"Area= "<<PI*rad*rad;
	}
};

class Circumference:public Area{
	int radius=2;
	static float PI;
public:
	void calperi(void){
		cout<<"Circumference= "<<2*3.142*radius;
	}
};


#endif /* SININ_H_ */
