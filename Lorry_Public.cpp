#include "Lorry_Public.h"

Lorry_Public::Lorry_Public()
	: Car(), capacity_of_car()
{}

Lorry_Public::Lorry_Public(const string model, const int cylinder, const double power, const int capacity_of_car)
	: Car(model, cylinder, power), capacity_of_car(capacity_of_car)
{}

Lorry_Public::Lorry_Public(const Lorry_Public& s)
	: Car(s), capacity_of_car(s.capacity_of_car)
{}

Lorry_Public& Lorry_Public::operator --()
{
	this->setCylinder(this->getCylinder() - 1);
	return *this;
}

Lorry_Public& Lorry_Public::operator ++()
{
	this->setCylinder(this->getCylinder() + 1);
	return *this;
}

Lorry_Public Lorry_Public::operator --(int)
{
	Lorry_Public a(*this);
	this->setPower(this->getPower() - 1);
	return a;
}

Lorry_Public Lorry_Public::operator ++(int)
{
	Lorry_Public a(*this);
	this->setPower(this->getPower() + 1);
	return a;
}