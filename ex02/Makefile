NAME		=	account

SRCS		=	Account.cpp\
				tests.cpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX			=	clang++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re

all			:	${NAME}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all