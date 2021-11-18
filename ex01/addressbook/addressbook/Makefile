
NAME = PhoneBook
FLAGS = -std=c++98 -Wall -Wextra -Werror
CC = clang++ $(FLAGS)
FILE = main.cpp Contact.cpp phoneBook.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(FILE) -o $(NAME)

clean :

fclean : clean
	@rm -rf $(NAME)

re : fclean all
