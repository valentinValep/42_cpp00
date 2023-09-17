NAME := phonebook

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -MMD

OBJ := PhoneBook.o \
		Contact.o \
		main.o

INCLUDES := -I.

DEPS := ${OBJ:.o=.d}

RM := rm -f

#############################################################################

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	$(RM) $(DEPS)
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include $(DEPS)
