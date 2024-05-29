#include <stdio.h>

int main(){
    float num, total;
    total = 0;
    num = 1;
    while (num != 0)
    {
        printf("Please Enter a number: \n");
        scanf("%f", &num);
        total += num;
        printf("Running Total %f\n", total);

    }
    
    printf("The final total is %f\n", total);
        
}