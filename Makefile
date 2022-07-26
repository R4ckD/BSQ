NAME = BSQ
SRCS = main.c 
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror 

all: 
	${OBJS}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} 

clean: 
		${RM} ${OBJS}

fclean: ${clean}
	${RM} ${NAME}
