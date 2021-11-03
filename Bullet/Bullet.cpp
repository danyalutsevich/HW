
#include <iostream>
#include <string>

class Bullet {

public:
	static int objCount;

	Bullet()
	{
		if (objCount < 5) {

			objCount++;
		}
		else {
			std::cout << "ctor " << this << "\n";
			throw std::exception("You can't create more than 5 bullets\n");

		}
	}

	void thisPrint() {

		std::cout << objCount << " " << this << "\n";

	}

	~Bullet()
	{
		objCount--;
	}

};

int Bullet::objCount = 0;

int main()
{
	try {

		std::cout << Bullet::objCount << "\n";

		Bullet one;
		one.thisPrint();

		Bullet two;
		two.thisPrint();

		Bullet three;
		three.thisPrint();
		
		Bullet four;
		four.thisPrint();

		Bullet five;
		five.thisPrint();
		
		Bullet six;
		six.thisPrint();
		
		Bullet seven;	
		seven.thisPrint();
		
		Bullet eight;
		eight.thisPrint();

	}
	catch (const std::exception& ex) {
		std::cout << ex.what();

	}


}

