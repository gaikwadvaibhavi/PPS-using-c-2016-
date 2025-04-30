#include <stdio.h>
int main()
{
    int num1 , rem;
    printf("Enter number to check\t");
    scanf("%d", &num1);
    rem = num1%2;
    if (rem == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}