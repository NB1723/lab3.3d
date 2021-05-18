#include "Lorry_Private.h"
#include "Lorry_Public.h"

int main()
{
	cout << "Initialization of private B" << endl;
	Lorry_Private B1("MAN", 8, 320, 20000);
	cout << B1 << endl;

	cout << "Size = " << sizeof(B1) << endl << endl;

	cout << "Principle of substitution" << endl << endl;
	Lorry_Private A1 = B1;
	cout << A1 << endl;

	cout << "Initialization of private C1" << endl;
	Lorry_Private C1;
	cin >> C1;
	cout << C1 << endl;

	cout << "Initialization of private B2" << endl;
	Lorry_Public B2("Truck", 8, 400, 30000);
	cout << B2 << endl;

	cout << "Size = " << sizeof(B2) << endl << endl;

	cout << "Principle of substitution" << endl << endl;
	Lorry_Public A2 = B2;
	cout << A2 << endl;

	cout << "Initialization of private C2" << endl;
	Lorry_Public C2;
	cin >> C2;
	cout << C2 << endl;

	cout << "++B1: " << endl;
	cout << ++B1 << endl;
	cout << "--B1: " << endl;
	cout << --B1 << endl;
	cout << "B1++: " << endl;
	cout << B1++ << endl;
	cout << "B1--: " << endl;
	cout << B1-- << endl;

	cout << "++B2: " << endl;
	cout << ++B2 << endl;
	cout << "--B2: " << endl;
	cout << --B2 << endl;
	cout << "B2++: " << endl;
	cout << B2++ << endl;
	cout << "B2--: " << endl;
	cout << B2-- << endl;
}