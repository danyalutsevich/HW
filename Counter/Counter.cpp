
#include <iostream>



class Counter {

	int count;
public:

	Counter(int start)
	{
		this->count = start;

	}


	int operator()() {
		count++;
		return count;
	}



};

int main()
{

	Counter c(10);
	std::cout << c() << "\n";
	std::cout << c() << "\n";
	std::cout << c() << "\n";
	std::cout << c() << "\n";
	std::cout << c() << "\n";
	std::cout << c() << "\n";
	std::cout << c() << "\n";
	std::cout << c() << "\n";



}
