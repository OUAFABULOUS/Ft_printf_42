# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoudni <omoudni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 21:11:17 by omoudni           #+#    #+#              #
#    Updated: 2021/12/11 00:07:43 by omoudni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_format.c\
				ft_printf.c\
				ft_printf_c.c\
				ft_in_list.c\
				ft_printf_%.c\
				ft_printf_d.c\
				ft_printf_i.c\
				ft_printf_s.c\
				ft_printf_p.c\
				ft_printf_u.c\
				ft_printf_bx.c\
				ft_printf_x.c\

OBJS		=	${SRCS:.c=.o}

NAME		=	libftprintf.a

RM			=	rm -f

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror 

.c.o		:
				${CC} ${FLAGS} -c $< -o ${<:.c=.o} 

$(NAME)		:	${OBJS}
				ar rc $(NAME) $(OBJS)

all			:	${NAME}

clean		:
				${RM} ${OBJS}

fclean		:	clean
				${RM} ${NAME}

re			:	fclean all

.PHONY		:	all clean fclean re
