// if comprision with sizeof function
#include<stdio.h>
int main()
{
    //size of is returning an unsigned int data
    if (sizeof(int) > -1) //Comparision Must Be A single type of data   sizeof(int) = 2 >-1 
       printf("True");
    else
       printf("False");
    return 0;
}
