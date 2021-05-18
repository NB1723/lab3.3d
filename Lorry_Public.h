#pragma once
#include "Car.h"

class Lorry_Public : public Car
{
private:
	int capacity_of_car;

public:
	int getCapacity_of_car() const { return capacity_of_car; }
	void setCapacity_of_car(int capacity_of_car) { this->capacity_of_car = capacity_of_car; }

	Lorry_Public();
	Lorry_Public(const string model, const int cylinder, const double power, const int capacity_of_car);
	Lorry_Public(const Lorry_Public& s);

	Lorry_Public& operator ++ ();
	Lorry_Public& operator -- ();
	Lorry_Public operator ++ (int);
	Lorry_Public operator -- (int);
};