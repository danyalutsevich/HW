#pragma once

#include <iostream>
#include <vector>
#include <map>



class PhoneBook {

private:
	std::multimap<std::string, std::string>* phoneBook = new std::multimap<std::string, std::string>;

public:

	PhoneBook* add(std::string name, std::string phone) {

		std::pair<std::string, std::string> contact;
		contact.first = name;
		contact.second = phone;
		phoneBook->insert(contact);

		return this;
	}

	PhoneBook* deleteByName(std::string name) {

		phoneBook->erase(name);

		return this;
	}

	PhoneBook* deleteByPhone(std::string phone) {

		std::vector<std::string> phones;

		for (std::multimap<std::string, std::string>::const_iterator i = phoneBook->cbegin(); i != phoneBook->cend(); i++) {

			if (i->second == phone) {

				phones.push_back(i->first);
			}
		}

		for (int i = 0; i < phones.size(); i++) {


			phoneBook->erase(phones[i]);
		}

		return this;
	}

	PhoneBook* print() {

		for (auto i : *phoneBook) {

			std::cout << i.first << " : " << i.second << "\n";

		}

		return this;
	}

	PhoneBook* findByName(std::string name) {

		auto search = phoneBook->find(name);

		if (search != phoneBook->end()) {
			std::cout<< "Found " + search->first + " " + search->second + '\n';
		}
		else {
			std::cout<< "Not found\n";
		}
		
		return this;

	}

	PhoneBook* findByPhone(std::string phone) {

		for (auto i : *phoneBook) {
			
			if (i.second==phone) {

				std::cout << i.first << " : " << i.second << "\n";
			}

		}

		return this;

	}



};

