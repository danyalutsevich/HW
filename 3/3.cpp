
#include <iostream>



template <typename T>
class List {
	
public:
	List();
	~List();

	void push_back(T data);
	int GetSize() {
		return size;
	}
	T& operator[](const int index);


private:

	template <typename T>
	class Node {
	public:
		int data;
		Node* next;
		Node(T data = T(),Node* next = nullptr) {

			this->data = data;
			this->next = next;

		}
	};

	int size;
	Node<T>* head;

};
template <typename T>
List<T>::List() {

	size = 0;
	head = nullptr;

}
template <typename T>
List<T>::~List() {




}

template<typename T>
void List<T>::push_back(T data){

	if (head==nullptr) {

		head = new Node<T>(data);
	}
	else {

		Node<T>* temp=this->head;

		while (temp->next!=nullptr) {

			temp = temp->next;

		}
		temp->next = new Node<T>(data);

	}
	size++;

}


template<typename T>
T& List<T>::operator[](const int index) {
	
	Node <T> *temp = this->head;
	int counter = 0;

	while (temp->next!=nullptr) {

		if (counter==index) {

			return temp->data;

		}

		temp = temp->next;
		counter++;

	}


}


int main() {


	List<int> list;

	list.push_back(3);
	list.push_back(4);
	list.push_back(7);


	
	int num = 0;
	std::cin >> num;

	for (int i = 0; i < num;i++) {
		
		list.push_back(rand() % 100);

	}

	std::cout << "\n";

	for (int i = 0; i < list.GetSize(); i++) {

		std::cout << list[i]<<"\n";

	}


}
