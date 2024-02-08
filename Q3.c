#include <stdio.h>

int main()
{
    float cs, cb;
    printf("Enter credit score: ");
    scanf("%f", &cs);
    printf("Enter credit balance: ");
    scanf("%f", &cb);
    printf("Interest is: ");
    if (cs<600)
    {
        printf("%f", 0.15*cb);
    }
    else if (cs>=600 && cs<750)
    {
        printf("%f", 0.12*cb);
    }
    else
    {
        printf("%f", 0.1*cb);
    }
    return 0;
}    
    
