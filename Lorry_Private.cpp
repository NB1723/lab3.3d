#include "Lorry_Private.h"

Lorry_Private::Lorry_Private()
	: Car(), capacity_of_car()
{}

Lorry_Private::Lorry_Private(const string model, const int cylinder, const double power, const int capacity_of_car)
	: Car(model, cylinder, power), capacity_of_car(capacity_of_car)
{}

Lorry_Private::Lorry_Private(const Lorry_Private& s)
	: Car(s), capacity_of_car(s.capacity_of_car)
{}

Lorry_Private& Lorry_Private::operator = (const Lorry_Private& s)
{
	string model = s.getModel();
	int cylinder = s.getCylinder();
	double power = s.getPower();
	capacity_of_car = s.capacity_of_car;
	return*this;
}

Lorry_Private::operator string () const
{
	stringstream ss;
	cout << "Model = " << getModel() << endl;
	cout << "Cylinder = " << getCylinder() << endl;
	cout << "Power = " << getPower() << endl;
	ss << "Capacity of car = " << capacity_of_car << endl;
	return ss.str();
}

Lorry_Private& Lorry_Private::operator --()
{
	this->setCylinder(this->getCylinder() - 1);
	return *this;
}

Lorry_Private& Lorry_Private::operator ++()
{
	this->setCylinder(this->getCylinder() + 1);
	return *this;
}

Lorry_Private Lorry_Private::operator --(int)
{
	Lorry_Private a(*this);
	this->setPower(this->getPower() - 1);
	return a;
}

Lorry_Private Lorry_Private::operator ++(int)
{
	Lorry_Private a(*this);
	this->setPower(this->getPower() + 1);
	return a;
}

ostream& operator << (ostream& out, const Lorry_Private& s)
{
	out << string(s);
	return out;
}

istream& operator >> (istream& in, Lorry_Private& s)
{
	string model;
	int  capacity_of_car, cylinder, power;
	cout << endl;
	cout << "Model = "; in >> model;
	cout << "Cylinder = "; in >> cylinder;
	cout << "Power = "; in >> power;
	cout << "Capacity of car = "; in >> capacity_of_car;
	cout << endl;
	s.setModel(model);
	cylinder > 0 ? s.setCylinder(cylinder) : s.setCylinder(0);
	power > 0 ? s.setPower(power) : s.setPower(0);
	capacity_of_car > 0 ? s.setCapacity_of_car(capacity_of_car) : s.setCapacity_of_car(0);
	return in;
}