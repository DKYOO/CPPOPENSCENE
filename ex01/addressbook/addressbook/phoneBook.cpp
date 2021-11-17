//
//  phoneBook.cpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 11/5/21.
//

#include "phoneBook.hpp"

void PhoneBook::addContact() {
    
    
    
    array[index].setFirstName();
    array[index].setLastName();
    array[index].setNickName();
    array[index].setPhoneNumber();
    array[index].setDarkestSecret();
    index ++;
    
    if (index == 8) {
        index = 0;
    }
    
}

void PhoneBook::search() {
    int newIndex = 0;
    std::string command;
    //Create table with "\" and . 10 symblos long
    while (array[newIndex].getFull()) {
        
        std::cout << std::setw(10) << newIndex << "|" ;
        if (array[newIndex].getFirstName().length() > 10) {
            std::cout << std::setw(9) <<  array[newIndex].getFirstName().substr(0, 9) << "."  << "|";
        } else {
            std::cout << std::setw(10) << array[newIndex].getFirstName() << "|" ;
        }
        if (array[newIndex].getLastName().length() > 10) {
            std::cout << std::setw(9) << array[newIndex].getLastName().substr(0, 9) << "." << "|";
        } else {
            std::cout << std::setw(10) << array[newIndex].getLastName() << "|" ;
        }
        if (array[newIndex].getNickName().length() > 10) {
            std::cout << std::setw(9) << array[newIndex].getNickName().substr(0, 9) << "."  << "|" << std::endl;
        } else {
            std::cout << std::setw(10) << array[newIndex].getNickName() << "|"  << std::endl;
        }
        newIndex++;
    }
    
    std::cout << "Enter Index 💚" << std::endl;
    std::getline(std::cin, command);
    int som = 0;
    if ((isdigit(stoi(command))) || (command.length() == 1)) {
        som = stoi(command);
        if (som >= 0 && som < 9) {
            std::cout << array[som].getFirstName() << std::endl;
            std::cout << array[som].getLastName() << std::endl;
            std::cout << array[som].getNickName() << std::endl;
            std::cout << array[som].getPhoneNumber() << std::endl;
            std::cout << array[som].getDarkestSecret() << std::endl;
        }
    } else {
        std::cout << "error, enter true Index 💚" << std::endl;
    }
}

//void PhoneBook::indexSearch() {
//        int enteredIndex;
//
//        if (command == this->index) {
//            std::cout << array[enteredIndex].getFirstName() << std::endl;
//            std::cout << array[enteredIndex].getLastName() << std::endl;
//            std::cout << array[enteredIndex].getNickName() << std::endl;
//            std::cout << array[enteredIndex].getPhoneNumber() << std::endl;
//            std::cout << array[enteredIndex].getDarkestSecret() << std::endl;
//        }
//}
