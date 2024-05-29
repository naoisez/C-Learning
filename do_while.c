#include <stdio.h>

int main(){
    float num, total;
    total = 0;

    do{
        printf("Enter a number: ");
        scanf("%f", &num);
        total += num;
        printf("The running total is %f\n", total);

    }

    while (num !=0 );
        printf("The final total is %f\n", total);
}