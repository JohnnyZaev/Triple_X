NAME 	= TripleX

src 	= TripleX.cpp

all: 	$(NAME)

$(NAME):
		g++ TripleX.cpp -o $@

fclean:
		rm $(NAME)

re: 	fclean all

.PHONY:	all fclean re