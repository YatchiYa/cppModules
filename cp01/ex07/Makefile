
SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= replace

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) *.replace */*.replace

re:				fclean $(NAME)

test:			$(NAME)
				./replace Makefile " " "."
				./replace tests/1 "e" "E"
				./replace tests/1 "lorem" "Corona"

.PHONY:			all clean fclean re test