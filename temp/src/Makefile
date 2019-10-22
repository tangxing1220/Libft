#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xtang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 18:00:46 by xtang             #+#    #+#              #
#    Updated: 2019/10/21 12:56:35 by xtang            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=-lm


_DEPS = ft_strlen.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = ft_strlen.o test_strlen.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ)) 

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 

ft_strlen: $(OBJ)
	$(CC) -Werror -Wextra -Wall -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
