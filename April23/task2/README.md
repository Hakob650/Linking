Task2

1.Compile each file into an object file

    
    gcc -c math.c
    
    
    gcc -c string_utils.c
    
    
    gcc -c main.c



2.Link objects files into a single executable



 
 gcc math.o string_utils.o main.o -o program




3.Run the executable

  
  
  
  ./program
