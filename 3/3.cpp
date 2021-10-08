
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

	void cinFromConsole() {

		do {

			std::cin >> fraction;

		} while (stoi(fraction.substr(fraction.find("/") + 1, fraction.length()))==0);


	}

};

int main()
{

	Fraction f;
	f.cinFromConsole();

	f.inverse();
	f.print();
}

