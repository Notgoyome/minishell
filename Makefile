##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile, don't forget to put CPPFLAGS and
## remove -Werror and backslash every src files
##

TARGET = mysh
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CPPFLAGS = -I include


all	:	$(TARGET)

$(TARGET)	: $(OBJ)
	$(CC) $(SRC) -o $(TARGET) $(CPPFLAGS) -g3
clean	:
	$(RM) $(OBJ)
fclean	:	clean
	$(RM) $(TARGET)
re	:	fclean all
