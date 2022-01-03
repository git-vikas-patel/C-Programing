#include <stdio.h>
int main()
{
    int n, i = 2, sum;
    printf("Enter The Value of n :");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
            i++;
    }
    printf("Sum of %d Numbers : %d", n, sum);
    return 0;
}
