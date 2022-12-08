# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aptive <aptive@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 17:28:02 by aptive            #+#    #+#              #
#    Updated: 2022/12/08 19:14:48 by aptive           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	claptrap
OS		= $(shell uname)

# directories
SRCDIR		=	./src
INCDIR		=	./includes
OBJDIR		=	./obj

# src / obj files
SRC		=	main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp\


OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

# compiler
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g3 -std=c++98 -Wshadow -Wno-shadow -fsanitize=address

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
