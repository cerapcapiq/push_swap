

MAKEFLAGS = --silent
NAME = push_swap

CFILES =	operation/ft_pa.c\
			operation/ft_pb.c\
			operation/ft_ra.c\
			operation/ft_rb.c\
			operation/ft_rr.c\
			operation/ft_rra.c\
			operation/ft_rrb.c\
			operation/ft_rrr.c\
			operation/ft_sa.c\
			operation/ft_sb.c\
			operation/ft_ss.c\
			New/ft_big_sort_lower.c\
			New/ft_big_sort_upper.c\
			New/ft_eigths.c\
			New/ft_find.c\
			New/ft_free_all.c\
			New/ft_if_sorted.c\
			New/ft_median.c\
			New/ft_quarters.c\
			error.c\
			input.c\
			list/ft_del.c\
			list/ft_lst_functions.c\
			list/ft_push_smallest.c\
			list/ft_set_flag.c\
			sort/ft_big_sort.c\
			sort/ft_large_pa.c\
			sort/ft_small_pa.c\
			sort/ft_sort_five.c\
			sort/ft_sort_four.c\
			sort/ft_sort_three.c\
			sort/ft_sort.c\
			main.c\

OBJECTS = $(CFILES:.c=.o)

LIB_PATH = libft/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

#CFLAGS = -g3 -fsanitize=address


all: subsystem $(NAME)

subsystem:
	@make -C $(LIB_PATH) all
	@echo "$(BL)  done compiling libft$(DF)"

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) $(LIB_PATH)libft.a -o $(NAME)
	@echo "$(GR) 	done compiling push_swap$(DF)"

clean:
	@make -C $(LIB_PATH) clean
	@rm -f $(OBJECTS)
	@echo "$(RED)	removing push_swap objs files$(DF)"

fclean: clean
	@make -C $(LIB_PATH) fclean
	@rm -f $(NAME)
	@echo "$(RED)	removing push_swap exec files$(DF)"

re: fclean all

call: all clean
	@make -C $(LIB_PATH) fclean

.SILENT:clean

GR 	:= \033[1;92m
YL	:= \033[1;93m
DF	:= \033[0m

RED := \033[1;31m     
BL := \033[1;34m        
ITA := \033[3;90m
red = \x1b[31m
