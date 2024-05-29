#include <stdio.h>
int main(){
    /* this is a C program to display all I have learned */
    int myint = 1;
    float myfloat = 3.14;
    char mychar = 'a';

    printf("My Integer: %d\n", myint);
    printf("My Float: %f\n", myfloat);
    printf("My Character: %c\n", mychar);
    printf("");
    printf("----------                  ----------\n");
    printf("Data Type                      Size   \n");
    printf(" double                         %d\n ", sizeof(double));
    printf("----------                  ----------'\n");
    printf("\n");
    printf("\n");
    printf("\n");printf("  char                           %d\n ", sizeof(char));
    printf(" int                            %d\n ", sizeof(int));
    printf(" float                          %d\n ", sizeof(float));
    printf(" long                           %d\n ", sizeof(long));
    printf(" short                          %d\n ", sizeof(short));

}