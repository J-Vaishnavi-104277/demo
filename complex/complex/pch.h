//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#include<string>
class complex {
public:
	int real,img; // ideally to be of string type

public:
	complex();
	complex(int, int);
	complex(int);
	complex operator*(const complex&);
	complex operator+(const complex&);
	complex operator-(const complex&);
	complex operator++();
	complex operator++(int);
};
