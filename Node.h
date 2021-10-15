#pragma once
#include <iostream>

template <typename T,typename T2>
class Leaf {

public:
	T key;
	T2 value;
	Leaf* left;
	Leaf* right;
	Leaf(T key,T2 value) :
		key { key },
		value{value},
		left{ NULL },
		right{ NULL }{	}

	void add(T key,T2 value) {

		if (key <= this->key) {
			//add to left

			if (this->left) {
				//left subtree exists
				this->left->add(key,value);

			}
			else {
				//right subtree exists

				this->left = new Leaf<T,T2>(key,value);

			}

		}
		else {
			//add to right

			if (this->right) {

				this->right->add(key,value);

			}
			else {

				this->right = new Leaf<T,T2>(key, value);


			}

		}

	}

	void print() {

		if (this->left) {

			left->print();

		}
		
		std::cout << key << " "<<value<<"\n";

		if(this->right) {
			
			right->print();

		}

	}

	void print(T2 value) {


		if (this->left) {

			left->print(value);

		}

		if (this->value==value) {

			std::cout << key << " " << value << "\n";

		}

		if (this->right) {

			right->print(value);

		}

	}

	void find(T key) {


		if (this->right) {

			right->find(key);

		}
		if (this->key == key) {

			std::cout << key << " " << value << "\n";

		}


		if (this->left) {

			left->find(key);

		}

	}


};
