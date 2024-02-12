CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = "I don’t want to set the world on fire"

SRCS = main.cpp \
	   Animal.cpp\
	   Cat.cpp\
	   Dog.cpp\
	   Brain.cpp
	   

HEADER = Animal.hpp\
		 Cat.hpp\
		 Dog.hpp\
		 Brain.hpp

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
re: fclean all
