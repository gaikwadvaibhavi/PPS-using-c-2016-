#include<stdio.h>
int main()
{ 
    int num1, num2, num3, avg=0;
    
    printf ("enter first number:");
    scanf("%d",& num1);
    
    printf("enter second number:");
    scanf("%d",& num2);
    
    printf("enter third number:");
    scanf("%d",& num3);
    
    avg = num1+ num2+ num3/3;
    
    printf("the avg is %d and %d is %d num1, num2, num3, avg");
    return 0;
}