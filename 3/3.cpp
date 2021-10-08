

#include <iostream>
#include <string>

class Fraction {

public:

	std::string fraction;
	
	void inverse() {

		fraction = fraction.substr(fraction.find("/") + 1, fraction.length()) + "/" + std::to_string(stoi(fraction));
		
	}
	void print() {

		std::cout << fraction;

	}
	

};

int main()
{

	Fraction f;
	std::cin>>f.fraction;

	f.inverse();
	f.print();
}

