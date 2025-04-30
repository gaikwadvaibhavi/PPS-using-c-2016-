#include <stdio.h>

int main() 
{
    int A, B;

    printf("Enter value for A: ");
    scanf("%d", &A);
    printf("Enter value for B: ");
    scanf("%d", &B);

    // Swapping without using a temporary variable
    A = A + B;
    B = A - B;
    A = A - B;

    printf("After swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}