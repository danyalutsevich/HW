

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class Arr {

private:

	std::vector<T> arr;

public:

	void add(T val) {

		arr.push_back(val);
	}

	void forEach(void (*expression)(T &)) {

		for (auto i = arr.begin(); i != arr.end(); i++) {

			expression(*i);

		}
	}
	void forEach(void (*expression)(T)) {

		for (auto i = arr.begin(); i != arr.end(); i++) {

			expression(*i);

		}
	}


};


int main()
{

	Arr<int> rar;

	rar.add(1);
	rar.add(2);
	rar.add(3);
	rar.add(4);
	rar.add(5);

	auto plusOne = [](int& val) {val++; };

	rar.forEach(plusOne);

	auto print = [](int val) {printf("%d", val); };

	rar.forEach(print);


}