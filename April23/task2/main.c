#include <stdio.h>
int add(int,int);
int multiply(int,int);
int string_length(const char *);
int main(){
        int sum=add(4,5);
        int product=multiply(3,6);
        int length=string_length("Hello,World!");

        printf("Sum=%d\n",sum);
        printf("Product=%d\n",product);
        printf("Length=%d\n",length);

        return 0;
}
