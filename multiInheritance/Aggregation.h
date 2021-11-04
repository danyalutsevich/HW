#pragma once

#include <iostream>


// Aggregation

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

class Pen {

public:
	std::string type;
	Product* Psettings = new Product;

	Pen() :type{ "" } {

		puts("Pen constructor\n");

	}
	~Pen() {

		delete Psettings;
		puts("Pen destructor\n");

	}

};


class WorkBook {

public:

	std::string paperColor;
	Product* Wsettings = new Product;

	WorkBook() :paperColor{ "" } {

		puts("WorkBook constructor\n");

	}
	~WorkBook() {
		delete Wsettings;
		puts("WorkBook destructor\n");

	}

};


class WorkBookWithPen {

public:

	WorkBook* workBook = new WorkBook;
	Pen* pen = new Pen;

	WorkBookWithPen() {

		puts("WorkBookWithPen constructor\n");

	}

	~WorkBookWithPen() {

		delete workBook;
		delete pen;

		puts("WorkBookWithPen destructor\n");

	}

};

