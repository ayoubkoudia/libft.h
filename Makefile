# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:28:05 by akoudia           #+#    #+#              #
#    Updated: 2022/10/20 19:15:50 by akoudia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_isalpha.c \
	  		ft_isdigit.c \
	  		ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_calloc.c \
	  ft_strrchr.c \
	  ft_strlen.c \
	  ft_atoi.c \
	  ft_strtrim.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_itoa.c	\
	  ft_split.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \

SRCS_BONUS 	= ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
	  			ft_lstsize_bonus.c \
	  			ft_lstlast_bonus.c \
	  			ft_lstadd_back_bonus.c \
	  			ft_lstdelone_bonus.c \
	  			ft_lstclear_bonus.c \
	  			ft_lstiter_bonus.c \

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $(<:c=o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

bonus: 		$(NAME) $(OBJS_BONUS)
			ar rcs $(NAME) $(OBJS_BONUS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all