#include <stdio.h>

int main(){
    char operator;
    float num1, num2, answer;

    printf("Enter an arthmetic expression: ");
    scanf("%f,%c,%f", &num1,&operator,&num2);  /* am tired will come back to this later */
    printf("Equation %f, %1s, %f",num1,num2,operator);

    switch (operator)
    {
        case '+':
            answer = num1 + num2;
            printf("%f + %f = %f\n", num1, num2, answer);
            break;
        
        case '-':
            printf("%f - %f = %f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%f * %f = %f\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%f / %f = %f\n", num1, num2, num1 / num2);
            break;
        
        default:
        printf("Invalid Operator!\n");
            break;
        }
}