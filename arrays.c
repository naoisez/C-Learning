#include <stdio.h>

int main(){
    int ages[10]; /* initialise array with an index of 10( 0 - 9 inclusive)  */
    int index;
    int total_age = 0;

    printf("Enter 10 numbers: \n");

    for (index = 0; index < 10; index++)      /*for loop that will add 1 to index while index is less than 10*/
    {
        scanf("%d", &ages[index]);         /*scans the input and enters it into the age array at the index of the current index in the for loop*/
        total_age += ages[index];          /* adds the current index of age to total_age */
    }

    printf("The average of the 10 numbers = %d\n", total_age / 10);  /*prints the average of the total (10) numbers stored in toal_age*/
}
