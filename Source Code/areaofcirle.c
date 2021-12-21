#include<stdio.h>
int main(int argc, char const *argv[])
{
   float r,area,peri;
   printf("radius of circle=");
   scanf("%f",&r);
   area=3.14*r*r;
   peri=2*3.14*r;
   printf("area  of circle=%f \n peri=%f",area,peri);
    return 0;
}
