LIBFT = libft
INC = includes

SRCS = FDS.c
LIBS = -L$(LIBFT) -lft
HEADERS = -I$(INC) -I$(LIBFT)
FLAGS = $(LIBS) $(HEADERS)

all:
	@make -s -C $(LIBFT)
	@echo Compiling libft
	@gcc $(SRCS) $(FLAGS) -o app
	@echo Good to go
	

clean:
	@make fclean -s -C $(LIBFT)
	@rm -f app
	@echo nothing here anymore, well, except .c

fclean: clean

re: clean all