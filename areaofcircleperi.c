#include<stdio.h>
int main(int argc, char const *argv[])
{
    float l,b,area,peri;
    printf("enter value of l and b=");
    scanf("%f%f",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("area=%f \n peri=%f",area,peri);
    return 0;
}
