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
	void cinFromConsole() {

		std::cin >> numerator;
		do {

			std::cin >> denominator;

		} while (!denominator);



	}

};

int main()
{

	Fraction f;

	f.cinFromConsole();
	f.inverse();
	f.print();

}