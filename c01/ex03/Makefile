# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aptive <aptive@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 20:18:17 by tdelauna          #+#    #+#              #
#    Updated: 2022/11/04 16:56:06 by aptive           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	weapon
OS		= $(shell uname)

# directories
SRCDIR		=	./src
INCDIR		=	./includes
OBJDIR		=	./obj

# src / obj files
SRC		=	main.cpp\
			Weapon.class.cpp\
			HumanA.class.cpp\
			HumanB.class.cpp\

OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

# compiler
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g3 -std=c++98 -fsanitize=address

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make all
