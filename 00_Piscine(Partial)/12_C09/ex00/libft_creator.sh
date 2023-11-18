#!/bin/bash

# Compile and create libft.a library

# Remove previous object files and library
rm -f *.o libft.a

# Compile the source files
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Create the static library libft.a
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Clean up object files
rm -f *.o

echo "libft.a created successfully!"