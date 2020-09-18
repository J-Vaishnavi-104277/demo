//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include<iostream>
complex::complex():
	real(0),img(0) { }
complex::complex(int x, int y):
	real(x),img(y){ }
complex::complex(int x) :
	real(x), img(x) { }
//complex 
complex complex::operator+(const complex& c1)
{
	
	complex temp;
	temp.real = c1.real +real;
	temp.img = c1.img + img;
	return temp;
}
complex complex::operator*(const complex& c1)
{
	
	complex temp;
	temp.real = (c1.real * real)-(c1.img*img);
	temp.img = (c1.real * real) + (c1.img * img);
	return temp;
}

complex complex::operator-(const complex& c1)
{
	

	complex temp;
	temp.real = c1.real - real;
	temp.img = c1.img- img;
	return temp;
}
complex complex::operator++()
{
	complex c1(2, 4);
	
	complex temp;
	temp.real = c1.real ++;
	temp.img = c1.img ++;
	return temp;
}
complex complex::operator++(int x)
{
	complex c1(2, 4);

	complex temp;
	temp.real = c1.real + x;
	temp.img = c1.img + x;
	return temp;
}
