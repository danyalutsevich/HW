

#include <iostream>

class Fraction {

public:

	int numerator;
	int denominator;
	void print() {

		std::cout << numerator << "/" << denominator;

	}

};

int main()
{

	Fraction f;
	f.numerator = 1;
	f.denominator = 3;
	f.print();
}

