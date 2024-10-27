#include <stdio.h>

int main() {
    int int_array[6];  // tableau de taille 5, 5 éléments + 1 (0 à la fin)
    int input_int;

    for (int i = 0; i < 5; i++) { // i = 0, 1, 2, 3, 4 => demande les éléments à ajouter
        scanf(" %d", &input_int);
        printf("[DEBUG] input_int : %d\n", input_int);
        int_array[i] = input_int;
    }

    // not 0 for min but the first element of the array
    int tmp_max = int_array[0], tmp_min = int_array[0];
    for (int i = 1; i < 4; ++i) {  // each element of the array besides 0 and 4 because we will compare it at the end
        if (int_array[i] > tmp_max) {
            tmp_max = int_array[i];
        }
        if (int_array[i] < tmp_min) {
            tmp_min = int_array[i];
        }
    }

    printf("Minimum : %d\n", tmp_min);
    printf("Maximum : %d\n", tmp_max);

    // print the array
    for (int i = 0; i < 7; ++i)
    printf("%d", int_array[i]);
    printf("\n");
    return 0;
}