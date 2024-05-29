#include <stdio.h>
#define SIZE 10

int main(){
    int ages[SIZE];
    int i;
    int total_age = 0;
    int youngest, oldest;

    printf("Enter 10 numbers: \n");

    for (i = 0;i < SIZE; i++)       /* reads input and insets into ages array and total_age */
    {
        scanf("%d", &ages[i]);  
        total_age += ages[i];
    }

    youngest = ages[0]; /* assigns first element in array to youngest */
    oldest = ages[0];  /* and oldest */

    for(i = 0;i < SIZE; i++)  /* compares the current index or element in the array to oldest/youngest */
    {
        if (ages[i] > oldest )  /* if the age is bigger than oldest, oldest then becomes that number */
        {
            oldest = ages[i];
        }

        if (ages[i] < youngest )   /* if the age is smaller than younger, younger then becomes that number */
        {
            youngest = ages[i];
        }
    }

    printf("The youngest = %d\n", youngest);
    printf("The oldest = %d\n", oldest);
    printf("The average = %d\n", total_age / 10); /* prints the average of the numbers in total_age */
}