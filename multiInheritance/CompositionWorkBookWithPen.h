#pragma once

#include <iostream>




class WorkBookWithPen {

public:


	WorkBookWithPen() {

		puts("WorkBookWithPen constructor\n");

	}

	~WorkBookWithPen() {

		puts("WorkBookWithPen destructor\n");

	}

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

	Pen pen;

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

	WorkBook workBook;




};


