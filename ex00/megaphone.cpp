//
//  main.cpp
//  mega
//
//  Created by Dmitry Kaveshnikov on 10/27/21.
//

#include <iostream>
#include <cctype>

int main(int ac, char **av) {
    
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (*av) {
            av++;
            if (*av == NULL)
                break;
        while (**av) {
            **av = std::toupper(**av);
            std::cout << **av;
            (*av)++;
        }
        if (*(av + 1)  != NULL)
            //                return 0;
            std::cout << " ";
    }
    std::cout << std::endl;
}
return 0;
}
