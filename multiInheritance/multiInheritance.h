#pragma once

#include <iostream>

//multi inharitance
 
 
class Product {

public:
	Product() {


		puts("Product constructor\n");

	}
	~Product() {

		puts("Product destructor\n");

	}

};

class Pen : virtual public Product {

public:
	Pen() {

		puts("Pen constructor\n");

	}
	~Pen() {

		puts("Pen destructor\n");

	}

};


class WorkBook : virtual public Product{

public:
	WorkBook() {

		puts("WorkBook constructor\n");

	}
	~WorkBook() {

		puts("WorkBook destructor\n");

	}

};


class WorkBookWithPen :public WorkBook,public Pen {

public:
	WorkBookWithPen() {

		puts("WorkBookWithPen constructor\n");

	}
	~WorkBookWithPen() {

		puts("WorkBookWithPen destructor\n");

	}

};