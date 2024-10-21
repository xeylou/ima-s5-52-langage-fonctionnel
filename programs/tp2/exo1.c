#include <stdio.h>

int main() {
    int counter = 0, input_int, total = 0;
    float average;
    while (1) {
        scanf("%d", &input_int);
        if (input_int == -1) {
            break;
        }
        else {
            counter ++;
            total += input_int;
        }
        //printf("res: %d", counter);
    }
    if (counter>1) {
        average = total / counter;
        printf("%d total\n", total);
        printf("%d counter\n", counter);
        printf("%f average", average);
    }
    return 0;
}