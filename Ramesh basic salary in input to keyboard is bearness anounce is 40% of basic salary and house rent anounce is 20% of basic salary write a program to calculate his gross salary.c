#include<stdio.h>
int main()
{
    float BS, D, HR, GS;

    printf("The basic salary of ramesh");
    scanf("%f",& BS);

    D=(0.4)*BS;
    HR=(0.2)*BS;

    GS=(BS+D+HR);

    printf("The gross salary of ramesh is %f",GS);
    
    return 0;
}