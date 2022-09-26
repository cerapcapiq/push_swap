# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 10:33:06 by abasarud          #+#    #+#              #
#    Updated: 2022/04/15 11:29:09 by abasarud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_atoi \
		ft_atol \
		ft_bzero \
		ft_calloc \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_itoa \
		ft_memchr \
		ft_memcpy \
		ft_memcmp \
		ft_memmove \
		ft_memset \
		ft_putchar_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putstr_fd \
		ft_strchr \
		ft_strdup \
		ft_strjoin \
		ft_strlcat \
		ft_split \
		ft_striteri \
		ft_strlcpy\
		ft_strlen \
		ft_strmapi \
		ft_strncmp \
		ft_strnstr \
		ft_strrchr \
		ft_strtrim \
		ft_substr \
		ft_tolower \
		ft_toupper \

FILES_B = ft_lstnew \
		  ft_lstadd_front \
		  ft_lstsize \
		  ft_lstlast \
		  ft_lstadd_back \
		  ft_lstdelone \
		  ft_lstclear \
		  ft_lstiter \
		  ft_lstmap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	@$(RM) $(OBJS) $(OBJS_B)
	@echo "$(YL)	removing libft objs files$(DF)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YL)	removing libft exec files$(DF)"

re: clean all

.PHONY: bonus all clean fclean re

GR 	:= \033[3;92m
YL	:= \033[1;93m
DF	:= \033[0m

RED := \033[1;31m     
BL := \033[3;34m        
ITA := \033[3;90m

