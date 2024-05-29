#include <stdio.h>

int main() {
    int terms;
    int i;
    int fib_prev = 0; // 
    int fib_curr = 1; // 

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Number of terms: %d\n", terms);


    printf("%d ", fib_prev);
    printf("%d ", fib_curr);


    for (i = 2; i < terms; i++) {
        int fib_next = fib_prev + fib_curr; 
        printf("%d ", fib_next); 
        fib_prev = fib_curr; 
        fib_curr = fib_next;
	printf("\n");
    }


    return 0;
}
