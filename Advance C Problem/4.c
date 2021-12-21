
#include<stdio.h>
int main()
{
    char *p = 0; //it point a zero memory location
    *p = 'A';
    printf("Value at p = %c\n",*p);
    return 0;
}
//get core dump error when trying to access the address which is not used