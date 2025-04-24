Task3

Here we create 2 files:
      
      math.c,which contains function implementation that takes an integer as input and returns its square.
      
      main.c,which calls that function for a specific number.

Then we compile the 2 files into object files:
      
      gcc -c math.c
      gcc -c main.c

Then we link them into a single executable one:

      gcc math.o main.o -o program

Here they link successfully.

Then we run the executable:

    ./program

And we get the output: 

    Square=25.

Then we modify the main.c file by calling cube(int n) function that doesn't exist yet.

And then we compile math.c and main.c into object files:
    gcc -c math.c 
    
    gcc -c main.c 

Then we link the object files into single executable file:
    
    gcc math.o main.o -o program //here we get a linker error because the cube(int n) function is not defined in math.c

We will see something like this:

    /usr/bin/ld: cannot find main: No such file or directory
    /usr/bin/ld: cannot find .o: No such file or directory
    collect2: error: ld returned 1 exit status

Then we modify math.c by adding the definition of the int cube(int n) function.

Then we compile math.c and main.c into object files again:

    gcc -c math.c

    gcc -c main.c

After that we link them into single executable file again:

    gcc math.o main.o -o program //here we will not get a linker error because we added the int cube(int n) function defintion in math.c

After that we run the executable one,and get the output:

    Square=25

    
