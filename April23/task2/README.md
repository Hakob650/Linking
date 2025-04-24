Task2
1.Creating Header Files(.h)

Header files include "function declarations".they allow other files to reference functions without needing to know their full implementation.

In Our Files:"math.h" and "string_utils.h".

#ifndef MATH_H/STRING_UTILS_H //prevents multiple inclusions

2.Creating C Files(.c)

The .c contains the actual function definition.

By including "math.h",math.c ensures that it follows declaration set in the header.

3.Using The Functions in main

In main.c,headers "math.h" and "string_utils.h" are included,this allows to call the functions declared in the header.

4.Compile each .c file into an object file
    
    gcc -c math.c
    
    gcc -c string_utils.c
    
    gcc -c math.c

5.Link the object files into a single executable

    gcc math.o string_utils.o main.o -o program

6.Run the executable

    ./program
    

