//
//  NewClass.hpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 10/30/21.
//

#ifndef NewClass_hpp
#define NewClass_hpp

#include <iostream>
#include <string>

class Contact {
    //MARK: Properties, but I think struct is more relevant here
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    //MARK: Consructors vs Destructors
    
public:
    
    Contact (void){};
    ~Contact (void){};
    
    // MARK: methods
    void setFirstName();
    void setLastName();
    void setNickName();
    void setPhoneNumber();
    void setDarkestSecret();

};


#endif /* NewClass_hpp */
