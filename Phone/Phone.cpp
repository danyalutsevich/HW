
#include <iostream>
#include "PhoneBook.h"

int main()
{

	PhoneBook* phone = new PhoneBook;

	phone->add("a", "1111111");
	phone->add("b", "2222222");
	phone->add("c", "3333333");
	phone->add("d", "4444444");
	phone->add("d", "4444444");
	phone->add("d", "4444444");
	phone->add("e", "5555555");
	phone->add("f", "6666666");


	phone->print();
	std::cout << "\n\n\n";
	phone->findByName("b");
	phone->findByPhone("4444444");

	phone->deleteByName("d");

	//not working
	//phone->deleteByPhone("4444444");

	std::cout << "\n\n\n";
	phone->print();
}

