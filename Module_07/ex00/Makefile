NAME = out

SOURCES =  	main.cpp\
			
OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++ $(FLAGS)

HEADERS = whatever.h

all: $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	@$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@$(CXX) -c $< -o $@
	
clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)