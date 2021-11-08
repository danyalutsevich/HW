
#include <iostream>
#include <math.h>

class Complex {

private:
	double Re;
	double Im;
public:

	Complex() {

	}
	Complex(double Re) {
		this->Re = Re;
	}
	Complex(double Im,double Re) {
		this->Im = Im;
		this->Re = Re;
		
	}

	void setRe(double Re) {

		this->Re = Re;
	}

	double getRe() {

		return Re;
	}

	void setIm(double Im) {

		this->Im = Im;
	}

	double getIm() {
		
		return Im;
	}

	Complex Abs() {

		return sqrt((Re*Re)+(Im*Im));
	}

	Complex operator+(const Complex& num) {

		Complex tmp=*this;
		tmp.Im += num.Im;
		tmp.Re += num.Re;
		return tmp;

	}


};

struct ComplexStruct {

private:
	double Re;
	double Im;
public:

	ComplexStruct() {

	}
	ComplexStruct(double Re) {
		this->Re = Re;
	}
	ComplexStruct(double Im, double Re) {
		this->Im = Im;
		this->Re = Re;

	}

	void setRe(double Re) {

		this->Re = Re;
	}

	double getRe() {

		return Re;
	}

	void setIm(double Im) {

		this->Im = Im;
	}

	double getIm() {

		return Im;
	}

	ComplexStruct Abs() {

		return sqrt((Re * Re) + (Im * Im));
	}

	ComplexStruct operator+(const ComplexStruct& num) {

		ComplexStruct tmp = *this;
		tmp.Im += num.Im;
		tmp.Re += num.Re;
		return tmp;

	}


};

int main()
{
	Complex num(1,1);

	ComplexStruct num1;


}
