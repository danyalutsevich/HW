

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


class Person {

	char* name;
	char* surname;
public:

	Person() : name{ NULL }, surname{ NULL }{



	}

	Person(const char *name, const char* surname){

		if (!name || !surname) {

			throw std::exception("name or surname is NULL");
		}

		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->surname = new char[strlen(surname) + 1];
		strcpy(this->surname, surname);

	}

	Person(const Person & tmp) {

		if (!name || !surname) {

			throw std::exception("name or surname is NULL");
		}

		this->name = new char[strlen(tmp.name) + 1];
		strcpy(this->name, tmp.name);
		this->surname = new char[strlen(tmp.surname) + 1];
		strcpy(this->surname, tmp.surname);

	}

	Person(Person&& tmp) noexcept : name{ tmp.getName() }, surname{tmp.getSurname()} {

		tmp.name = NULL;
		tmp.surname = NULL;
	}
	
	void setName(const char *name) {
		if (this->name) {

			delete[] this->name;
		}
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);

	}

	void setSurname(const char * surname) {
		if (this->surname) {

			delete[] this->surname;
		}
		this->surname = new char[strlen(surname) + 1];
		strcpy(this->surname, surname);

	}

	char* getName() {

		return name;

	}

	char* getSurname() {


		return surname;
	}

	void operator=(const Person& tmp) {

		if (this->surname) {

			delete[] this->surname;
		}
		
		if (this->name) {

			delete[] this->name;
		}

		this->name = new char[strlen(tmp.name) + 1];
		this->surname = new char[strlen(tmp.surname) + 1];

		strcpy(this->name,tmp.name);
		strcpy(this->surname,tmp.surname);

	
	}

	~Person() {

		if (this->surname) {

			delete[] this->surname;
		}
		if (this->name) {

			delete[] this->name;
		}

	}

};


int main()
{
	/*Person p("name","surname");


	std::cout << p.getName() << " " << p.getSurname() << "\n";*/

	Person t("Testun", "Proverych");
	Person p = t;
	p.setName("Testunia");
	Person r;
	r.setName("Fred");
	r.setSurname("Fredovich");

	p = r;
	std::cout << t.getName() << " " << t.getSurname() << "\n";
	std::cout << p.getName() << " " << p.getSurname() << "\n";
	std::cout << r.getName() << " " << r.getSurname() << "\n";


}
