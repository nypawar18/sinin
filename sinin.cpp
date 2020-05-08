/*
 * sinin.cpp
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */

#include<iostream>
using namespace std;
#include"sinin.h"
float Area::PI=3.142;
float Circumference::PI=3.1422;
int main(void)
{
	Circumference c;
	c.calarea();
	c.calperi();
	return 1;
}


