#pragma once
#include "Car.h"

class Lorry_Private : private Car
{
private:
	int capacity_of_car;

public:
	using Car::getModel;
	using Car::getCylinder;
	using Car::getPower;

	using Car::setModel;
	using Car::setCylinder;
	using Car::setPower;

	using Car::Car;

	int getCapacity_of_car() const { return capacity_of_car; }
	void setCapacity_of_car(int capacity_of_car) { this->capacity_of_car = capacity_of_car; }

	Lorry_Private();
	Lorry_Private(const string model, const int cylinder, const double power, const int capacity_of_car);
	Lorry_Private(const Lorry_Private& s);

	Lorry_Private& operator = (const Lorry_Private& s);
	operator string () const;

	Lorry_Private& operator ++ ();
	Lorry_Private& operator -- ();
	Lorry_Private operator ++ (int);
	Lorry_Private operator -- (int);

	friend ostream& operator << (ostream& out, const Lorry_Private& s);
	friend istream& operator >> (istream& in, Lorry_Private& s);
};
