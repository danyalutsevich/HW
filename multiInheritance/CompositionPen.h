#pragma once
#include <iostream>



class Pen {

public:
	std::string type;

	Pen() :type{ "" } {

		puts("Pen constructor\n");

	}
	~Pen() {


		puts("Pen destructor\n");

	}

	class Product {

	public:

		std::string title;
		std::string color;

		Product() :title{ "" }, color{ "" } {

			puts("Product constructor\n");
		}

		~Product() {

			puts("Product destructor\n");

		}

	};

	Product settings;

};



