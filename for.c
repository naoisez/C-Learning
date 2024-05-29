#include <stdio.h>

int main(){
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("  Num---Square---Cube\n");
    for (i;i<=num;i++)
    {
        printf("%4d    %4d    %4d\n", i, i * i, i*i*i);
    }
}