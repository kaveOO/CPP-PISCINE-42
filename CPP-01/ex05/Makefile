NAME		=	Harl

CPP			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

SRC			=	main.cpp		\
				Harl.cpp		\

OBJ 		= $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re
