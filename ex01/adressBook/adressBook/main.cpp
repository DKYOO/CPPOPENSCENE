//
//  main.cpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 10/30/21.
//

#include "phoneBook.hpp"
#include "Contact.hpp"

int main(int ac, char **av) {
	std::string command;
	PhoneBook Jopa;
	
	while (1) {
		
		std::getline(std::cin, command);
		if (command == "ADD") {
			Jopa.addContact();
			
		}
		else if (command == "SEARCH") {
			
		}
		else if (command == "EXIT") {
			break;
		}
		else {
			std::cout << "Poshel NAXUI, ПЁС 🐶" << std::endl;
		}
	}
	return 0;
}

