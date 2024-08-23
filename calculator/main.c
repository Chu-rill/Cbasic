#include <stdio.h>

int main(){
   
    char operator;
    double num1;
    double num2;
    double result;

    printf("\n Enter an operator (+,-,*,/): ");
    scanf("%c", &operator);

    printf("\n Enter number1: ");
    scanf("%lf", &num1);

     printf("\n Enter number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nresult; %.2lf", result);
            break;
         case '-':
            result = num1 - num2;
            printf("\nresult; %.2lf", result);
            break;
         case '*':
            result = num1 * num2;
            printf("\nresult; %.2lf", result);
            break;
         case '/':
            result = num1 / num2;
            printf("\nresult; %.2lf", result);
            break;
        default:
            printf("%c is not a valid", operator);
    }

   return 0;
}
// a comment to keep the streak alive