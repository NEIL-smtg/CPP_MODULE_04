NAME		=	brain
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/
FILES		=	main Animal Cat Dog Brain WrongAnimal WrongCat
SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(FILES)))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
GCPP		=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -pedantic
RM			=	rm -rf
FSAN		=	-fsanitize=address -g3

all:
	mkdir -p $(OBJS_DIR)
	make $(NAME)

$(NAME):$(OBJS)
	$(GCPP) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR)%.o:$(SRCS_DIR)%.cpp
	$(GCPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean:clean
	$(RM) $(NAME)

re:fclean all

leaks:
	valgrind --leak-check=full ./$(NAME)