#include <stdio.h>

int main(){
    float mark;
    char grade;

    printf("Enter the mark you got in your school test: ");
    scanf("%f", &mark);

    if (mark >= 70)         /* using if and else in conjuction */
        grade = 'A';
    else
        if (mark >= 60)
            grade = 'B';
        else
            if (mark >= 50)
                grade = 'C';
            else if (mark >= 40)  /* now with the else if statement */
                grade = 'D'; 
    
    printf("A mark of %f, gives you a grade of %c, Congratulations!",mark, grade);
}