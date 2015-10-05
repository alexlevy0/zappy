ECHO=	echo -e

RM=	/bin/rm -rf

CLIENT=		client

DIR_CLIENT=	src

DIR_OBJ_CLIENT=	obj

SRC_CLIENT=	main.c \
		network.c \
		option.c \

CFLAGS=		-W -Wall -Wextra -g3

OBJ_CLIENT=	$(addprefix $(DIR_OBJ_CLIENT)/, $(SRC_CLIENT:.c=.o))

LDFLAGS+=	$(LIBPATH) $(LIB)

all:	$(CLIENT)

$(CLIENT):	$(OBJ_CLIENT)
	$(CC) -o $(CLIENT) $(OBJ_CLIENT) $(CFLAGS) $(LDFLAGS) -lm -ldl -g3

$(DIR_OBJ_CLIENT)/%.o: $(DIR_CLIENT)/%.c
	@mkdir -p $(@D)
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@$(RM) $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_LIST)
	@$(ECHO) '\033[0;31m> Directory cleaned\033[0m'

fclean:	clean
	$(RM) $(SERVER)
	$(RM) $(CLIENT)
	@$(ECHO) '\033[0;31m> Remove executable\033[0m'

re:	fclean all
