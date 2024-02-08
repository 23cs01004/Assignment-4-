#include <stdio.h>
int main()
{
    int a;
    printf("Enter age: ");
    scanf("%d", &a);
    if (a<5)
    {
        printf("free");
    }
    else if (a>=5 && a<=12)
    {
        printf("20");
    }
    else if (a>=13 && a<=59)
    {
        printf("50");
    }
    else
    {
        printf("%f", 0.8*50);
    }
    return 0;
}
    