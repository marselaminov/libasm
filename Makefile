NAME	=	libasm.a

SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

OBJS	=	$(SRCS:.s=.o)

NASM	=	nasm

FLAFS	=	-f macho64

RM		=	rm -f

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

.s.o:
			$(NASM) $(FLAFS) $< -o $(<:.s=.o)

all:		
			$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re