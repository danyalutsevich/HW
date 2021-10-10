// CopyMove.cpp : Copy & Move semantics
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Type {
public:
    int x;
    int arraySize;
    char* str;

    Type() {


    }
    Type(int x):Type() {

        this->x = x;

    }
    Type(int x,int arraySize):Type(x) {

        this->arraySize = arraySize;
        this->str = new char[arraySize];

    }
    Type(const Type &temp) {

        this->x = temp.x;
        this->arraySize = temp.arraySize;
        this->str = new char[temp.arraySize];

    }
    void operator =(Type temp) {

        this->x = temp.x;
        this->arraySize = temp.arraySize;
        this->str = new char[temp.arraySize];

    }
};

int main()
{
    Type A;
    A.x = 10;
    A.str = new char[100];  // Перенести в конструктор
    strcpy(A.str, "Hello World!\n");


    // Создать конструктор копирования
    Type B = A;  // CopyCtr(-), Copy=(-), DefCtr, Def=
    B.str[2] = 'X';

    // Создать оператор копирования
    Type C;
    C = A;  // Copy=(-), Def=

    std::cout << (void*)A.str << " " << A.str;
    std::cout << (void*)B.str << " " << B.str;
    std::cout << (void*)C.str << " " << C.str;

    return 0;
}
