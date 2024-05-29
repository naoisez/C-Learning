#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    int i;
    int primecounter = 0;

    for (number = 3; number < 1000; number++){
        for (i = 2; i < number; i++)
            {
                if (number % i == 0)
                {   
                    printf("%d is not prime\n", number);
                    break;         
                }

                else{
                    primecounter = primecounter + 1;
                    break;
                }
            }
    }

    printf("%d", primecounter);     

}