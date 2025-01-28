# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 17:02:47 by ggaribot          #+#    #+#              #
#    Updated: 2025/01/28 14:37:20 by ggaribot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC		=	ft_strlen.c		ft_toupper.c	ft_tolower.c	ft_strrchr.c	ft_strnstr.c	ft_strncmp.c \
			ft_strlcpy.c	ft_strlcat.c	ft_strchr.c		ft_memset.c		ft_memmove.c	ft_memcpy.c \
			ft_memcmp.c		ft_memchr.c		ft_isprint.c	ft_isdigit.c	ft_isascii.c	ft_isalpha.c \
			ft_isalnum.c	ft_bzero.c		ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c \
			ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c	ft_striteri.c \
			ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	classic.c		base16.c \
			ft_printf.c		ft_ptr.c		ft_strtol.c		get_next_line.c		get_next_line_utils.c \
			ft_atol.c		2d_map.c		ft_strcmp.c		ft_free_split.c \
			ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c \
			ft_lstadd_back.c	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c \
			ft_lstmap.c

OBJS		=	$(SRC:.c=.o)
BOBJS		=	$(BSRC:.c=.o)

CC		=	cc
CFLAGS		=	-Wall -Wextra -Werror
AR		=	ar rcs
RM		=	rm -f

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS) $(BOBJS)
	$(AR) $(NAME) $(OBJS) $(BOBJS)

all:		$(NAME)

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:		bonus all clean fclean re
