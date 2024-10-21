#include <stdio.h>

int main() {
    int int_array[6];
    int input_int; // 5 + 1 (0 at the end)

    for (int i = 0; i < 4; i++) { // i = 0, 1, 2, 3, 4
        scanf(" %d", &input_int);
        printf("[DEBUG] input_int : %d\n", input_int);
        int_array[i] = input_int;
    }
    int tmp_max = int_array[0], tmp_min = int_array[0];
    for (int i = 1; i < 4; ++i) {
        if (int_array[i] > tmp_max) {
            tmp_max = int_array[i];
        }
        if (int_array[i] < tmp_min) {
            tmp_min = int_array[i];
        }
    }
    printf("Minimum : %d\n", tmp_min);
    printf("Maximum : %d\n", tmp_max);
    for (int i = 0; i < 4; ++i)
    printf("%d", int_array[i]);
    printf("\n");
    return 0;
}