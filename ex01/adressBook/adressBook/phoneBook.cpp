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
    
    while (array[newIndex].getFull()) {
        
        std::cout << newIndex << std::endl;
        std::cout << array[newIndex].getFirstName() << std::endl;
        std::cout << array[newIndex].getLastName() << std::endl;
        std::cout << array[newIndex].getNickName() << std::endl;
        newIndex++;
    }
}
