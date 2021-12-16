NAME = a.out

SRCS = main.cpp  \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \
DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CXX=clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^ 

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
