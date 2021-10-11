#pragma once
#include <iostream>

template<typename T>
class Node {

public:
	T data;
	Node* prev;
	Node* next;

	Node();
	Node(T);




};

template<typename T>
Node<T>::Node() :
	data{ 0 },
	next{ NULL },
	prev{ NULL } {

}

template <typename T>
Node <T>::Node(T data) :
	data{ data },
	next{ NULL },
	prev{ NULL } {

}




