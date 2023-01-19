# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aptive <aptive@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 17:28:02 by aptive            #+#    #+#              #
#    Updated: 2023/01/19 17:56:31 by aptive           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	easyfind
OS		= $(shell uname)

# directories
SRCDIR		=	./src
INCDIR		=	./includes
OBJDIR		=	./obj

# src / obj files
SRC		=	main.cpp\

INCFILE =	easyfind.hpp\



OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

OBJINC	= $(addprefix $(INCDIR)/,$(INCFILE))


# compiler
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -g3 -std=c++98 -Wshadow -Wno-shadow -fsanitize=address -Wconversion

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp $(OBJINC)
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

# $(OBJINC):	$(INCDIR)
# 	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make all
