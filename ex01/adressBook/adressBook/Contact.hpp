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
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    //MARK: Consructors vs Destructors
    
public:
    
    Contact (void){};
    ~Contact (void){};
    
    // MARK: methods
    
//    void add(void) const;
//    void exit(void) const;
//    void search(void) const;
//    

};


#endif /* NewClass_hpp */
