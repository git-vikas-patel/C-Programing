#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

void welcome();
void opetions();
void sumTwodigit();
void subTwodigit();
void mulTwodigit();
void divTwodigit();
void delay();
int main()
{
    char name[7];
    printf(".......................................................\n");
    printf("\t\t\tProgram Setup\n");
    printf(".......................................................\n");
    printf("Enter Your First Name Here :");
    scanf("%s",&name);
    welcome(name);
    opetions();
    return 0;
}



void welcome(char wname[7]){
    printf("Hello Mr. %s\n",wname);
}

void opetions(){
    int input;
    printf("What type of operation do you want to perform !\n");
    printf("Type the number in front of operation do you want to perform !\n\n");
    printf("1 . Addition of Two digits\n");
    printf("2 . Subtract of Two digits\n");
    printf("3 . Multiply of Two digits\n");
    printf("4 . Division of Two digits\n");
    printf("5 . Exit");
    printf("\n\n\n\n\n Enter Choice - ");
    scanf("%d",&input);
    if (input==1)
    {
        sumTwodigit();
    }
    else if (input==2)
    {
        subTwodigit();
    }
    else if (input==3)
    {
        mulTwodigit();
    }
    else if (input==4)
    {
        divTwodigit();
    }
    else if (input==5)
    {
       exit(0);
    }
    
    else{
        printf("Wrong Input Try Again!\n");
        opetions();
    }
    
}

void sumTwodigit(){
    float a,b;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    printf("The Addition of %f and %f is : %.2f\n\n\n",a,b,a+b);
    delay(1);    
    opetions();
}
void subTwodigit(){
    float a,b;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    printf("The Subtraction of %f and %f is : %.2f\n\n\n",a,b,a-b);
    delay(1);
    opetions();
}
void mulTwodigit(){
    float a,b;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    printf("The Multiplication of %f and %f is : %.2f\n\n\n",a,b,a*b);
    delay(1);
    opetions();
}
void divTwodigit(){
    float a,b;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    printf("The Division of %f and %f is : %.2f\n\n\n",a,b,a/b);
    delay(1);
    opetions();
}

  
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}