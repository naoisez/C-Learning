#include <stdio.h>

int main(){
    int num1 = 13;    /* logical operators in if statements -  && == ||  and, equal, or   ! = not */
    int num2 = 13;
    int num3 = 12;

    if (num1 < num3 && num2 < num3)
        printf("Bigger");
    else if (num1 > num3 && num2 > num3)
        printf("Smaller");
    else
        printf("Ok");

}