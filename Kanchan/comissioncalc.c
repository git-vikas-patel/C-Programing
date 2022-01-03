#include<stdio.h>
int main(){
    float sales,comission;
    int case_finder = 0;
    printf("Enter the sales to find out commision :");
    scanf("%f",&sales);
    if (sales < 1000)
    {
       case_finder = 0;
    }else if (sales > 1000 && sales < 25000)
    {
       case_finder=1;
    }else if (sales >= 25000)
    {
        case_finder = 2;
    }  
    switch (case_finder)
    {
    case 0 :
        printf("No Comission !");
        break;
    case 1 :
        comission = (sales*10)/100;
        printf("Your Comission is : %f",comission);
        break;
    case 2 :
        comission = 200 + (sales*8)/100;
        printf("Your Comission is : %f",comission);
        break;
    default:
        printf("Wrong Input !");
        break;
    }
}