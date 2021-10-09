#include <iostream>

class Fraction {

public:

	int numerator;
	int denominator;

	void print() {

		std::cout << numerator << "/" << denominator;

	}
	void inverse() {

		int temp = numerator;
		numerator = denominator;
		denominator = temp;

	}

};

int main()
{

	Fraction f;

	std::cin >> f.numerator;
	std::cin >> f.denominator;

	f.inverse();
	f.print();

}