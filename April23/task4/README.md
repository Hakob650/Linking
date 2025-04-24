Task4

Here we will work with 3 files:
 
  1)math.h-includes the prototypes for 2 functions
    
     
      #ifndef MATH_H //checks if macro MATH_H is defined,prevents multiple inclusions
      #define MATH_H //defines the macro MATH_H
      int add(int a,int b);
      int subtract(int a,int b);
      #endif //ends the conditional block



2)math.c-This file calls the math.h for making sure that is follows the declarations set in the header,and provides the implementation of functions add and subtract.



3)main.c-This file includes math.h and calls the add and subtract functions for specific numbers and prints the results.




Steps to Execute:




1)Compile math.c and main.c into object files

   

    
    gcc -c math.c

   
    
    
    gcc -c main.c




2)Link them into single executable file

  
  
   
   gcc math.o main.o -o program




3)Run the executable

  
  
  
  ./program
