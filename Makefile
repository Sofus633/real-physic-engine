CC = gcc
EXTERNAL_LIB = -lm
SOURCE = ./source
LIBS = ./libs
UTILS = ./utils
SRC = $(SOURCE)/main.c $(SOURCE)/preproces.c  $(SOURCE)/update.c $(SOURCE)/handle_key.c \
	  $(LIBS)/llist/ft_lstfunc.c $(LIBS)/llist/lst_add.c $(LIBS)/llist/lst_map.c\
 	  $(LIBS)/images_mlx/images.c \
	  $(LIBS)/object_mlx/object.c \
		$(LIBS)/vectors/vector2_operations.c


OBJ = $(SRC:.c=.o)
NAME = test

CFLAGS = -I/usr/local/mlx_linux/include -O3 -g
LDFLAGS = -L/usr/local/mlx_linux/lib -L/usr/lib $(EXTERNAL_LIB) 

 
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$< -> $@  ✨"

$(NAME): $(OBJ) 
	@echo "\n"	
	$(CC) $(OBJ) $(LDFLAGS) ./libs/mlx_linux/*.a -lXext -lX11 -lz -o $(NAME)
	@echo "\n$(OBJ) -> $(NAME) ✨\n"	
	make clean
	@printf "🧙 compilation\033[0;32m SUCESS \033[0m🪄\n"
clean:
	find . -type f -name *.o -delete
	@printf "🧙 allaways at your service to \033[0;32m CLEAN \033[0m🧹\n"

fclean: clean
	rm -f $(SOURCE)/$(NAME)
	@printf "🧙 Sending everything to the void \033[0;32m FCLEAN \033[0m🌌\n"

re: fclean all
