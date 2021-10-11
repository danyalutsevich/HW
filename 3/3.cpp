//List2:cpp Double linked list

#include <iostream>
#include "List.h"

int main()
{
	List<float> list;

	list.add(1.0);
	list.add(9.0);
	list.add(5.0);
	list.add(9.0);
	list.insertBefore(2.5, 1);
	list.add(9.0);
	list.print(0);
	std::cout << "\n";
	std::cout << list.deleteValue(9);
	std::cout << "\n";
	list.print(0);

	//try {

	//	list.deleteIndex(1);
	//}
	//catch (const std::exception& ex) {

	//	std::cout << ex.what();
	//	return -1;
	//}
	//std::cout << "\n";
	////list.print();

	return 0;
}

