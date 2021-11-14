#include <iostream>

void megaphone(int str) {
    if (str > 96 && str < 123)
        std::cout << (char)(str - 32);
    else
        std::cout << (char)str;
}

int main(int ac, char **av) {
    
    char **ptr;
    if (ac < 2) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        ptr = ++av;
        while (*av && *ptr)
        {
            ptr++;
            while (**av) {
                megaphone(**av);
                (*av)++;
            }
            std::cout << " ";
            av = ptr;
        }
        std::cout << std::endl;      
    }
    return 0;
}
