//
//  NewClass.hpp
//  adressBook
//
//  Created by Dmitry Kaveshnikov on 10/30/21.
//

#ifndef NewClass_hpp
#define NewClass_hpp

class Contact {
    //MARK: Properties, but I think struct is more relevant here
public:
    int index;
    char *first_name;
    char *last_name;
    char *nickname;
    char *phone_number;
    
    
    
private:
    
    char *darkest_secret;

    //MARK: Consructors vs Destructors
    
Contact (void);
~Contact (void);
    
    // MARK: methods
    
    void add(void) const;
    void exit(void) const;
    void search(void) const;
    

};


#endif /* NewClass_hpp */
