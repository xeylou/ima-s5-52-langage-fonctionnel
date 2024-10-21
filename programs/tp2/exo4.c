#include <stdio.h>

// sort the array
int bubble_sort(int* input_array, int input_array_size) {

    int i, tmp;
    for (i = 0; i < input_array_size-1; i++) {
        printf("[DEBUG] %d et %d\n", input_array[i], input_array[i+1]);
        if (input_array[i+1] < input_array[i]) {
            tmp = input_array[i];
            input_array[i] = input_array[i+1];
            input_array[i+1] = tmp;
        }
        printf("[DEBUG] OK\n\n");
    }

    
}

int main() {
    int i;

    int array[6];
    array[0] = 1;
    array[1] = 2;
    array[2] = 4;
    array[3] = 3;
    array[4] = 6;
    array[5] = 5;

    // getting array size (len)
    int array_size=sizeof(array) / sizeof(array[0]);
    printf("Taille du tableau : %d\n\n", array_size);

    // print array's elements
    printf("Éléments du tableau : \n");
    for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
         printf("%d\n",array[i]);
    }
    printf("\n");

    // check if array is sorted
    for (i = 0; i < array_size-1; i++) {
        printf("[DEBUG] %d et %d\n", array[i], array[i+1]);
        if (array[i+1] < array[i]) {
            printf("Tableau non trié ici\n");
            // break;
        }
        printf("[DEBUG] OK\n\n");
    }

    printf("=====\nBubble sort\n=====\n\n");

    bubble_sort(array, 6);

}