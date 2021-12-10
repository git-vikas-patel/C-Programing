#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,x;
    a=5;
    b=6;
    x=(++a)+(b--)+4;
    printf("%d",x);
    return 0;
}
