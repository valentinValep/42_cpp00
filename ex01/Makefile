NAME := phonebook

CC := c++

FLAGS := -Wall -Werror -Wextra -std=c++98 -MMD

OBJ := PhoneBook.o \
		Contact.o \
		main.o

INCLUDES := -I.

DEPS := ${OBJ:.o=.d}

RM := rm -f

#############################################################################

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(DEPS)
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include $(DEPS)
