#include <stdio.h>

int main()
{
    int a;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    if (a<100 || a>999)
    {
        printf("Incorrect Input");
        return 1;
    }
    else
    {
        int d1 = a%10;
        int d2 = (a%100 - d1)/10;
        int d3 = a/100;
        int sum = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);
        if (sum == a)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}