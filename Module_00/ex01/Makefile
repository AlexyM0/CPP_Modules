CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = PhoneBook

SRCS = main.cpp\
		Phonebook.class.cpp\
		Contact.class.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) *.gch 

fclean: clean
	$(RM) $(NAME)

re: fclean all