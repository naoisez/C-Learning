#include <stdio.h>

int main(){
    float num1, num2 , max;

    printf("Enter a number: \n");
    scanf("%f", &num1);
    printf("Enter another number: \n");
    scanf("%f", &num2);

    /*assign max to the largest of the two numbers*/
    /* ? is the conditional operator (if else) */

    max = (num1 > num2 ) ? num1 : num2;
    printf("The largest of the two numbers is %f\n", max);

    /* shorthand of if (num1 > num2) max = num1    else   max = num2 */
}