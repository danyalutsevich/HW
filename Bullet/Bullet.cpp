
#include <iostream>
#include <vector>

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
	std::vector<std::unique_ptr<Bullet>> bulletV;
	try {

		std::cout << Bullet::objCount << "\n";

		for (int i = 0; i < 6; i++) {

			bulletV.push_back(std::unique_ptr<Bullet>(new Bullet));
			bulletV[i]->thisPrint();
		}

	}
	catch (const std::exception& ex) {
		std::cout << ex.what();

	}


}

