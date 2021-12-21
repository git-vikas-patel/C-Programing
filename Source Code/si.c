#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p,r,t,SI;
    printf("enter value of p,r,and t=");
    scanf("%f%f%f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("simple interest=%.2f",SI);  
    return 0;
}

