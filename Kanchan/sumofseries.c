#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j,x, n;
    double z, fact, sumofx;
    i = 1;
    j = 1;
    fact = 1;

    printf("Enter x");
    scanf("%d", &x);
    printf("Enter n");
    scanf("%d", &n);
    while (i <= n)
    {
        sumofx = 1;
        for (j = 1; j <= i; j++)
        {
            sumofx = sumofx * x;
        }
        for (j = i; j >= 1; j--)
        {
            fact = fact * j;
        }
        printf("%.2f\t", sumofx);
        printf("%.2f\t", fact);
        printf("\n");
        z = z + (sumofx/fact);
        fact = 1;
        i = i + 2;
    }
    printf("%.2f",z);
    return 0;
}
