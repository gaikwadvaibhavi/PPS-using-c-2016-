#include <stdio.h>
int main() 
{
    int A, B, C;

    printf("Enter value for A: ");
    scanf("%d", &A);
    printf("Enter value for B: ");
    scanf("%d", &B);

    // Swapping using a temporary variable C
    C = A;
    A = B;
    B = C;

    printf("After swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}