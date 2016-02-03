// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Vector {
public:
	Vector(int s) : elem{ new double[s] }, sz{ s } {}
	double& operator[](int i) { return elem[i]; }
	int size() { return sz; }
private:
	double* elem;
	int sz;
};

int main()
{	
	auto vector1 = Vector(3);
	auto loc0add = &vector1.operator[](0); //get address of return array location
	*loc0add = 1; //set value in address location to 1
	std::cout << vector1.operator[](0) + '\n';
}

