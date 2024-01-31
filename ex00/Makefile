CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = "Polymorphism"

SRCS = main.cpp \
	   Animal.cpp\
	   Cat.cpp\
	   Dog.cpp
	   

HEADER = Animal.hpp\
		 Cat.cpp\
		 Dog.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY:all
all:$(NAME)

.PHONY:clean
clean:
	rm -f $(OBJS)

.PHONY:fclean
fclean: clean
	rm -f $(NAME)

.PHONY:re
re:fclean all
