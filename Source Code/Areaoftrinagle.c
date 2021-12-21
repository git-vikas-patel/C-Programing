#include <stdio.h>
#include<math.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float a, b, c, s, area;
    printf("enter three value=");
    scanf("%f%f%f", &a, &b, &c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle=%f",area);
    getch();
    return 0;
}
