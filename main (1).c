#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
    printf("Enter third number: \n");
    scanf("%d",&c);
    if (a>=b && a>=c)
        printf("%d largest number.",a);
        else if (b>=a && b>=c)
            printf("%d is largest number.",b);
    else(c>=a && c>=b);
    printf("%d is largest number.",c);
    return 0;
    
}

