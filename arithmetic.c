#include <stdio.h>

int main(){
    int year = 2006;
    int year2 = 2008;
    printf("I was born in the year: %d\n ", year);
    printf("Oscar was born in the year: %d\n", year2);
    printf("%d + %d = %d\n", year, year2, year + year2);
    float year3 = year + year2;
    printf("Heres the number as a float: %f\n", year3);
    year3++;
    printf("Incremented by 1: %f\n", year3);
    year3--;
    year3--;
    printf("Decremented by 1: %f\n", year3);
    printf("float divided by int: %f\n", year3 / 7);

    printf("\n");
    printf("\n");
    printf("\n");

    int answer;

    printf("Annnddd for my next trick...\n");
    printf("\n");
    printf("--------------------\n");
    printf("   Enter A Number:  ");
    scanf("%d", &answer);
    printf("--------------------\n");
    printf("Your number was %d\n", answer);
    printf("--------------------\n");


}
