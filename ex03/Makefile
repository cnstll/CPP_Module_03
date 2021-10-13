NAME = a.out

SRCS = main.cpp  \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \
DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

UNAME_S := $(shell uname -s)
   ifeq ($(UNAME_S),Linux)
        CC=clang-9++
    endif
    ifeq ($(UNAME_S),Darwin)
        CC=clang++
    endif

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $^ 

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
