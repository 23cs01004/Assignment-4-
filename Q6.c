#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    char operator; 
    printf("Operation: ");
    scanf(" %c", &operator);
    switch (operator)
    {
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;
        case '*':
            printf("%d", a*b);
            break;
        case '/':
            printf("%d", a/b);
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
}
    