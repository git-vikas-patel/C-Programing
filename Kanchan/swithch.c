#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main()
{
    int choice;
    float radius, area ,length, width,base,height,side;
    printf("----------------------------------------\n");
    printf("1. Area of circle\n");
    printf("2. Area of rectangle\n");
    printf("3. Area of triangle\n");
    printf("4. Area of square\n");
    printf("----------------------------------------\n");
    printf("Enter Your Choice :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("----------------------------------------\n");
        printf("1. Area of circle\n");
        printf("Enter radius of circle to find out area :");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("Area of circle is :%.2f", area);
        break;
    case 2:
        printf("----------------------------------------\n");
        printf("2. Area of rectangle\n");
        printf("Enter width of rectangle :");
        scanf("%f", &width);
        printf("Enter lenght of rectangle :");
        scanf("%f", &length);
        area = width * length;
        printf("Area of rectangle is : %.2f",area);
        break;
    case 3:
        printf("----------------------------------------\n");
        printf("3. Area of triangle\n");
        printf("Enter Base of triangle :");
        scanf("%f", &base);
        printf("Enter height of triangle :");
        scanf("%f", &height);
        area = (base*height)/2;
        printf("Area of triangle is: %.2f",area);
        break;

    case 4:
        printf("----------------------------------------\n");
        printf("4. Area of square\n");
        printf("Enter side of square :");
        scanf("%f", &side);
        area = side*side;
        printf("Area of square is: %.2f",area);
        break;

    default:
        printf("Wrong Choice !");
        break;
    }
}