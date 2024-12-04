#include <stdio.h>

int main(){
    float a,b;
    char operation;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the arithmetic operation(+,-,/,*): ");
    scanf(" %c",&operation);
    switch (operation)
    {
    case '+':
        printf("The sum of %.2lf and %.2lf is: %.2lf",a,b,a+b);
        break;
    case '-':
        printf("The difference of %.2lf and %.2lf is: %.2lf",a,b,a-b);
        break;
    case '*':
        printf("The mulitplication of %.2lf and %.2lf is: %.2lf",a,b,a*b);
        break;
    case '/':
        if(b==0){
            printf("Division by zero is invalid!");
            break;
        }
        printf("The divisor of %.2lf and %.2lf is: %.2lf",a,b,a/b);
        break;
    }
    printf("\n");
    return 0;
}