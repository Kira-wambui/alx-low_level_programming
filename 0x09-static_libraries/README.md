Steps to create static library.
First compile all .c files to get our object files .o files. gcc -c *c
Then we create our static library from our object files. ar rc libholberton.a *.o
Then we confirm if our static library was created successfully. ar -t libholberton.a
We confirm if our object files were linked successfully. nm libholberton.h
