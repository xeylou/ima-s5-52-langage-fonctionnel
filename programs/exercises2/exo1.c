#include <stdio.h>

/*
Printing the average of a list of 
integer prompted until -1 is given
*/

int main() {
    int counter = 0, input_int, total = 0;
    // counter for the final division
    // total for the sum of all inputed intergers
    float average;  // average car be floated
    while (1) {
        scanf("%d", &input_int);
        if (input_int == -1) {
            break;
        }
        else {
            counter ++;
            total += input_int;
        }
        // printf("[DEBUG] input_int : %d\n", input_int);
        // printf("[DEBUG] counter : %d\n", counter);
        // printf("[DEBUG] total : %d\n", total);
    }
    // -1 is typed
    if (counter>1) {
        /*
        In C, dividing two integers performs an integer division by default, so the decimal part is discarded. To get a floating-point result, I need to cast at least one of the integers to a float (or double) before dividing so it takes it as an float division
        */
        average = total / (float)counter;
        printf("total : %d\n", total);
        printf("counter : %d\n", counter);
        printf("average : %f\n", average);
    }
    return 0;
}