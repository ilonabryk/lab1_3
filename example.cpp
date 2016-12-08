//Lab1_2
#include "example.h"
#include <math.h>
#include <iostream>

using namespace std;


example::example()
{
}

example::example(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void example::set_example(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}


float example::get_A()
{
	return (pow(x - 1, 1./3));
}

float example::get_B()
{
	return (pow(y + get_A(), 1./4));
}

float example::get_C()
{
	return (fabs(x - y));
}

float example::get_D()
{
	return (sin(z)*sin(z) + tan(z));
}

float example::sum()
{
	float a1, a2, a3, a4;;
	a1 = get_B();
	a2 = get_C();
	a3 = get_D();
	a4 = a1 / a2 / a3;
	
	cout << "result" << a4 << endl;
	return 0;
}

void print (example & object)
{
	cout << object.x<< "\t" << object.y << "\t" <<object.z << endl;
}

example::~example()
{
}
