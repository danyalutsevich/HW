#include <iostream>

class Fraction {

public:

	int numerator;
	int denominator;
	
	Fraction() {



	}
	Fraction(int numerator, int denominator) {

		this->numerator = numerator;
		this->denominator = denominator;

	}

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
	void operator +=(Fraction temp) {

		this->numerator *= temp.denominator;
		temp.numerator *= this->denominator;
		this->numerator += temp.numerator;

		this->denominator *= temp.denominator;
		temp.denominator = this->denominator;


	}

	Fraction operator +(Fraction temp) {

		Fraction temp2;
		if (this->denominator==temp.denominator) {

			temp2.denominator = this->denominator;
			temp2.numerator = this->numerator + temp.numerator;

		}
		else {

			temp2.numerator = this->numerator * temp.denominator + temp.numerator * this->denominator;
			temp2.denominator = this->denominator * temp.denominator;

		}

		return temp2;

	}
	Fraction operator +(int temp) {

		Fraction temp2;

		temp2.numerator = this->numerator  + this->denominator * temp;

		temp2.denominator = this->denominator;

		return temp2;

	}

	Fraction operator -(Fraction temp) {

		Fraction temp2;

		if (this->denominator == temp.denominator) {

			temp2.denominator = this->denominator;
			temp2.numerator = this->numerator - temp.numerator;

		}
		else {

			temp2.numerator = this->numerator * temp.denominator - temp.numerator * this->denominator;
			temp2.denominator = this->denominator * temp.denominator;

		}

		return temp2;

	}

	Fraction operator -(int temp) {

		Fraction temp2;

		temp2.numerator = this->numerator - this->denominator * temp;

		temp2.denominator = this->denominator;

		return temp2;

	}


};

int main()
{

	Fraction f(3, 4);
	Fraction d(1, 4);
	f = f - d;

	//f.cinFromConsole();
	//f.inverse();
	f.print();

}