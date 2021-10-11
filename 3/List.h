#pragma once

#include <iostream>
#include "Node.h"

template<typename T>
class List {

private:
	Node<T>* element;
	int size = 0;
public:
	List();
	void add(T, bool tail = true);
	void print(bool order = false);
	void deleteIndex(int index);
	int deleteValue(T value);
	void insertBefore(T value, size_t index);
	int GetSize() { return size; };
};


template <typename T>
List<T>::List() :element{ NULL } {


}

template <typename T>
void List <T>::add(T data, bool tail) {

	if (element == NULL) {

		element = new Node<T>(data);


	}
	else if (tail) {
		//end of the list
		while (element->next != NULL) {

			element = element->next;

		}
		element->next = new Node<T>(data);
		element->next->prev = element;

	}
	else {
		//start of the list

		while (element->prev != NULL) {

			element = element->prev;

		}
		element->prev = new Node<T>(data);
		element->prev->next = element;

	}

	size++;
}

template <typename T>
void List<T>::print(bool order) {

	if (element == NULL) {

		std::cout << "Empty list\n";
		return;
	}

	if (order) {
		while (element->prev)
		{
			element = element->prev;
		}
	}

	Node<T>* tmp = element;


	while (element->prev) {

		element = element->prev;

	}

	//< tmp->next->data<<" ";
	while (tmp) {

		std::cout << tmp->data << " ";
		tmp = tmp->prev;

	}

	tmp = element->next;

	//std::cout << tmp->prev->data << " ";
	while (tmp) {

		std::cout << tmp->data << " ";
		tmp = tmp->next;

	}





}

template<typename T>
inline void List<T>::deleteIndex(int index)
{
	/*Node<T>* temp = this->head;
	int counter = 0;
	while (temp!=NULL) {

		if (counter == index) {



		}


	}*/

	if (element == NULL) {

		throw std::exception("removing from empty list");

	}
	while (element->prev) {

		element = element->prev;

	}
	for (size_t i = 0; i < index; i++) {

		element = element->next;

		if (element == NULL) {

			throw std::exception("index out of bounds");

		}



	}
	if (element->next) {

		element->next->prev = element->prev;

	}
	if (element->prev) {

		element->prev->next = element->next;

	}

	Node <T>* tmp = element;

	if (element->prev) {

		element = element->prev;

	}

	else if (element->next) {

		element = element->next;

	}

	if (tmp == element) {

		element = NULL;

	}
	delete tmp;
	size--;

}

template<typename T>
inline int List<T>::deleteValue(T value) {

	if (element == NULL) {

		throw std::exception("removing from empty list");

	}
	while (element->prev) {

		element = element->prev;
		
//	std::cout << element->data<<" ";

	}
	int deleteCounter = 0;
	for (size_t i = 0; i < List::GetSize()+1; i++) {

		element = element->next;
		
		if (element == NULL) {

			throw std::exception("index out of bounds");

		}
		if (element->data == value) {
			size--;
			deleteCounter++;

			if (element->next) {

				element->next->prev = element->prev;

			}
			if (element->prev) {

				element->prev->next = element->next;

			}

			Node <T>* tmp = element;

			if (element->prev) {

				element = element->prev;

			}

			else if (element->next) {

				element = element->next;

			}

			if (tmp == element) {

				element = NULL;

			}
			delete tmp;


		}


	}

	return deleteCounter;

}

template<typename T>
inline void List<T>::insertBefore(T value, size_t index)
{
	if (element == NULL) {

		throw std::exception("removing from empty list");

	}
	while (element->prev) {

		element = element->prev;

	}
	for (size_t i = 0; i < index; i++) {

		element = element->next;

		if (element == NULL) {

			throw std::exception("index out of bounds");

		}



	}

	Node<T>* newElement = new Node<T>(value);


	if (index) {

		newElement->next = element;
		newElement->prev = element->prev;
		element->prev->next = newElement;
		element->prev = newElement;

	}
	else {


		newElement->next = element;
		element->prev = newElement;




	}


	size++;
}

