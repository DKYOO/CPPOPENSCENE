//
//  main.cpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 10/30/21.
//

#include "phoneBook.hpp"
#include "Contact.hpp"

int main() {
	std::string command;
	PhoneBook Jopa;
	
	while (!std::cin.eof()) {
		std::cout << "Please ENTER Command 😊" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD") {
			Jopa.addContact();
			
		}
		else if (command == "SEARCH") {
			Jopa.search();
//            Jopa.indexSearch();
		}
		else if (command == "EXIT") {
			break;
		}
		else {
			std::cout << "NO NO NO 🐶" << std::endl;
		}
	}
	return 0;
}

