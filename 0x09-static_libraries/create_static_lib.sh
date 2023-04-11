#!/bin/bash

# Compile all the .c files in the current directory into object files
gcc -c *.c

# Create a static library named liball.a from the object files
ar rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Remove the object files
rm *.o

