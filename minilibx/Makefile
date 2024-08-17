# minilibx_test
NAME		=	minilibx_test
SRCS		=	main.c
OBJS 		=	$(SRCS:.c=.o)
# Compiler
CC			=	cc

LIBNAME_MLX    = libmlx
LIBDIR_MLX    = ./minilibx-linux
LIBS        += $(LIB_MLX)
ifeq ($(OS), Darwin)
    LIB_MLX    = $(LIBDIR_MLX)/$(LIBNAME_MLX)_Darwin.a
    LDFLAGS    = -L/usr/lib -L$(LIBDIR_MLX)/obj
    LIBS    += -L/usr/X11R6/lib -lX11 -lXext -framework OpenGL -framework AppKit
else
    LIB_MLX    = $(LIBDIR_MLX)/$(LIBNAME_MLX).a
    LDFLAGS    = -L./lib -L$(LIBDIR_MLX)/obj
    LIBS    += -lXext -lX11
endif

# Rules
all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(LIBS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re