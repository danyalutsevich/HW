#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>



struct Point {

	char* title;
	double x;
	double y;

	/* 1 */
	Point() : title{ NULL }, x{ 0 }, y{ 0 } {

	}

	/* 2 */
	Point(Point&& other) noexcept : x{ other.x }, y{ other.y }, title{ other.title } {

		other.title = NULL;
		printf("Move constructor\n");
	}

	/* 3 */
	Point(const Point& other) : x{ other.x }, y{ other.y }, title{ NULL } {

		this->setTitle(other.title);
	}

	/* 4 */
	Point(double x, double y, char* title = NULL) : x{ x }, y{ y }, title{ title } {

	}

	/* 5 */
	~Point() {
		if (title) delete[] title;
		printf("Destructor\n");
	}

	/* 6 */
	Point& operator = (const Point& other) {
		this->x = other.x;
		this->y = other.y; 
		
		this->setTitle(other.title);
		printf("Copy =\n");
		return *this;
	}

	/* 7 */
	Point& operator =  (Point&& other) noexcept {
		this->x = other.x; 
		this->y = other.y; 
		this->title = other.title; 
		
		other.title = NULL;
		printf("Move =\n");
		return *this;
	}

	Point operator-() {
		this->x = -this->x;
		this->y = -this->y;
		return *this;
	}

	Point operator-(const Point& other) {
		Point tmp;
		tmp.x = this->x-other.x;
		tmp.y = this->y-other.y;
		return tmp;
	}

	Point operator+() {
	
		return *this;
	}

	Point operator+(const Point& other) {
		Point tmp;
		tmp.x = this->x + other.x;
		tmp.y = this->y + other.y;
		return tmp;
	}

	void setTitle(const char* title) {
		if (this->title) delete[] this->title;
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);
	}
};


int main() {

	Point a;
	Point b;
	Point c;

	a.x = 10;
	a.y = 5;
	b.x = 1;
	b.y = 2;

	std::cout << a.x << " " << a.y << "\n";
	c = a + b;
	std::cout << c.x << " " << c.y << "\n";
	

	//Point p1, p2;
	//p1.setTitle("point A");
	//Point p3 = p1; 
	//p2 = p1 = p3; 

	//p2.title[0] = 'P';

	//printf("%s (%p/%p) %f (%p) \n", p1.title, p1.title, &p1.title, p1.x, &p1.x);
	//printf("%s (%p/%p) %f (%p) \n", p2.title, p2.title, &p2.title, p2.x, &p2.x);
	//printf("%s (%p/%p) %f (%p) \n", p3.title, p3.title, &p3.title, p3.x, &p3.x);

	return 0;
}