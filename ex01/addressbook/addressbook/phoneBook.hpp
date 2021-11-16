//
//  phoneBook.hpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 11/5/21.
//

#ifndef phoneBook_hpp
#define phoneBook_hpp
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>


class PhoneBook {
private:
    
    Contact array [8];
    int index;
    
public:
    void addContact(void);
    void search(void);
//    void indexSearch(void);
    
    
// Contrucors vs Destructors
    
    PhoneBook (void){};
    ~PhoneBook (void){};
};

#endif /* phoneBook_hpp */
