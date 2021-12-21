// if comprision with float value
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float f = 0.1;
    if(f == 0.1){   // Here 0.1 treated as double data type
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}
