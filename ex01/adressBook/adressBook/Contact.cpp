//
//  NewClass.cpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 10/30/21.
//

#include "Contact.hpp"

void Contact::setFirstName() {
    
    std::cout << "Please ADD First Name     🙏" << std::endl;
    std::getline(std::cin, firstName);
    
}

void Contact::setLastName() {
    std::cout << "Please ADD Last Name      🤌🏿" << std::endl;
    std::getline(std::cin, lastName);
}

void Contact::setNickName() {
    std::cout << "Please ADD Nickname       🤲🏽" << std::endl;
    std::getline(std::cin, nickName);
    
}


void Contact::setPhoneNumber() {
    std::cout << "Please ADD Phone Number   💋" << std::endl;
    std::getline(std::cin, phoneNumber);
}


void Contact::setDarkestSecret() {
    std::cout << "Please ADD Darkest Secret 👻" << std::endl;
    std::getline(std::cin, darkestSecret);
    std::cout << "Pizdec CYKA Bl9Db" << std::endl;
    
}
