#include <stdio.h>
#define NO_OF_DAYS 7
#define NO_OF_MACHINES 5

int main(){
    int output[NO_OF_DAYS][NO_OF_MACHINES];
    int day, machine;
    int total_output, average;

    /* read each machines output for the day */
    for (day = 0 ; day < NO_OF_DAYS; day++)
    {
        printf("Enter the output for day %d\n", day + 1);
        for (machine = 0; machine < NO_OF_MACHINES; machine++)
        {
            printf("Machine Number %d ", machine + 1);
            scanf("%d", &output[day][machine]);
        }
    }

    /*calculate the average output for each machine */
    for (machine = 0; machine < NO_OF_MACHINES; machine++)
    {
        total_output = 0;
        for (day =0; day < NO_OF_DAYS; day++)
        {
            total_output += output[day][machine];
        }
        average = total_output / NO_OF_DAYS;
        printf("\n Machine No. %d has an average output of %d\n", machine+1, average);
    }
}
