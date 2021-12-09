#include<stdio.h>
#include<ctype.h>
void upperCaseConv();//Function Decleration
void lowerCaseConv();//Function Decleration
int main()
{
   char name[7];
   printf("Enter Your Name Here :");
   scanf("%s",&name);
   upperCaseConv(name);
//    lowerCaseConv(name);
    return 0;
}

void upperCaseConv(char str[7]){
     int i=0;
    while (i<7)
    {
        str[i]=toupper(str[i]);
        i++;
    }
        printf("%s",str);
}
void lowerCaseConv(char str[7]){
     int i=0;
    while (i<7)
    {
        str[i]=tolower(str[i]);
        i++;
    }
        printf("%s",str);
}