#include <stdio.h>
#include "math.h"
#include "string_utils.h"

int main(){
        int sum=add(4,5);
        int product=multiply(3,4);
        int length=string_length("Hello,World!");

        printf("Sum=%d\n",sum);
        printf("Product=%d\n",product);
        printf("Length=%d\n",length);

        return 0;
}
