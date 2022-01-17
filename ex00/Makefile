NAME = a.out

SRCS = main.cpp  \
ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CXX=c++

#-Wshadow warns whenever a local variable or type declaration shadows another variable,
# parameter, class member, etc.
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
