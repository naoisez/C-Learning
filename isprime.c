#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    int i;
    int isprime = 1;

    printf("---Check If Number Is Prime---\n");
    printf("        Enter a Number:       \n");
    scanf("%d", &number);

    for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {   
                isprime = 0;             
            }
        }

    if (isprime == 1){
        printf("prime");
    }
    else{
        printf("not prime");
    }


}           