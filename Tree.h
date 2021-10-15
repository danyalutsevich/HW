#pragma once
#include <iostream>
#include"Node.h"


template <typename T,typename T2>
class Tree {

private:
	Leaf<T,T2>* root;

public:
	Tree() : root{ NULL } { }
	void add(T key,T2 value);
	void print();
	void print(T2 value);
	void find(T key);

};

template<typename T, typename T2>
inline void Tree<T, typename T2>::add(T key,T2 value){

	if (!root) {

		root = new Leaf<T,T2>(key,value);

	}
	else {
		
		root->add(key,value);

	}



}

template<typename T, typename T2>
inline void Tree<T, typename T2>::print(){
	if (root) {

		root->print();
	}
	else {
		std::cout << "Empty tree\n";
	}

}

template<typename T, typename T2>
inline void Tree<T, T2>::print(T2 value){

	if (root) {

		root->print(value);
	}
	else {

		std::cout << "Empty tree\n";

	}




}

template<typename T, typename T2>
inline void Tree<T, T2>::find(T key){


	if (root) {

		root->find(key);
		
	}
	else {

		std::cout << "Empty tree\n";

	}



}
