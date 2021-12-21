#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,X,L;
    printf("Enter first value :");
    scanf("%d",&a);
    printf("Enter second value :");
    scanf("%d",&b);
    printf("Enter third value :");
    scanf("%d",&c);
    X=a>b?a:b;
    L=X>c?X:c;
    printf("The largest value in %d %d and %d is  : %d",a,b,c,L);
    printf("\n\n\n.........Press Any Key For Close............");
    getch();
    return 0;
}
