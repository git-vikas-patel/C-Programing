#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char number[20];
    int i = 0;
    printf("Enter Number to convert into word :");
    scanf("%s", number);
    while (number[i] != '\0')
    {
        // printf("%c\n", number[i]);
       
        switch (number[i])
        {
        case '0':
            printf("Zero ");
            break;
        case '1':
            printf("One ");
            break;
        case '2':
            printf("Two ");
            break;
        case '3':
            printf("Three ");
            break;
        case '4':
            printf("Four ");
            break;
        case '5':
            printf("Five ");
            break;
        case '6':
            printf("Six ");
            break;
        case '7':
            printf("Seven ");
            break;
        case '8':
            printf("Eight ");
            break;
        case '9':
            printf("Nine ");
            break;

        default:
            system("cls");
            printf("Wrong Input !");
            break;
        }
         i++;
    }
    return 0;
}
