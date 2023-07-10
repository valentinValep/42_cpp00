NAME := megaphone

CC := c++

FLAGS := -Wall -Werror -Wextra -std=c++98 -MMD

OBJ := megaphone.o \

OBJ := $(addprefix $(BINARIES_DIR),$(OBJ))

DEPS := ${OBJ:.o=.d}

RM := rm -f

#############################################################################

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(BINARIES_DIR) :
	mkdir $(BINARIES_DIR)

$(BINARIES_DIR)%.o : $(SOURCES_DIR)%.c | $(BINARIES_DIR)
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(DEPS)
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include $(DEPS)
