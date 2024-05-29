#include <stdio.h>

int main(){
    int i, j;

    printf("    ");
    for (i;i<=12;i++)
        printf("%2d  ", i);
    
    printf("\n  +");
    for (i;i<=73;i++)
        printf("-");

    for (i = 1; i <=12; i++){   /*start of outer loop*/
        printf("\n%2d |", j);
        for (j = 1; j <=12; j++){  /* start of  inner loop */
            printf("%5d", i * j);
        }                           /*end of inner */
    }                               /*end of outer */
                                    
    printf("\n");
}