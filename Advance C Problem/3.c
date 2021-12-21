#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b=1,c=1;
    a = sizeof(c = ++b +1); // Here it return the size  of int not the value of c
    printf("a = %d , b = %d, c = %d\n",a,b,c);
    return 0;
}
//size of operator dose not at in aerathmatic operation