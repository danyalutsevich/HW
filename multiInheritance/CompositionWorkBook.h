#pragma once

#include <iostream>




class WorkBook {

public:

	std::string paperColor;

	WorkBook() :paperColor{ "" } {

		puts("WorkBook constructor\n");

	}
	~WorkBook() {

		puts("WorkBook destructor\n");

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

