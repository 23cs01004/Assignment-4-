#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch (a%2)
    {
        case 0: 
            printf("Even");
            break;
        default:
            printf("Odd");
            break;
    }
    return 0;
}    
    