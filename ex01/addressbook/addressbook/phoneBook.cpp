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
    //Create table with "\" and . 10 symblos long
    while (array[newIndex].getFull()) {
        
        std::cout << newIndex << "|" << std::setw(10);
        if (array[newIndex].getFirstName().length() > 9) {
            std::cout << array[newIndex].getFirstName().substr(0, 9) << "." << "|" << std::setw(10);
        } else {
            std::cout << array[newIndex].getFirstName() << "|" << std::setw(10);
        }
        if (array[newIndex].getLastName().length() > 9) {
            std::cout << array[newIndex].getLastName().substr(0, 9) << "." << "|" << std::setw(10);
        } else {
            std::cout << array[newIndex].getLastName() << "|" << std::setw(10);
        }
        if (array[newIndex].getNickName().length() > 9) {
            std::cout << array[newIndex].getNickName().substr(0, 9) << "." << "|" << std::setw(10) << std::endl;
        } else {
        std::cout << array[newIndex].getNickName() << "|" << std::setw(10) << std::endl;
        }
        newIndex++;
    }
    
}

void PhoneBook::indexSearch() {
    //    int enteredIndex;
    //
    //    if (indexIsEntered()) {
    //        std::cout << array[enteredIndex].getFirstName() << std::endl;
    //        std::cout << array[enteredIndex].getLastName() << std::endl;
    //        std::cout << array[enteredIndex].getNickName() << std::endl;
    //        std::cout << array[enteredIndex].getPhoneNumber() << std::endl;
    //        std::cout << array[enteredIndex].getDarkestSecret() << std::endl;
    //    }
}
