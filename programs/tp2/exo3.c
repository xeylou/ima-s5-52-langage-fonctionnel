#include <stdio.h>

int main() {

    int i, j, k, lines_number;
    printf("Nombre de lignes = ");
    scanf("%d", &lines_number);

    // gauche

    for (i = lines_number; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= lines_number; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // droite

    for (i = lines_number; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = i; k <= lines_number; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= lines_number; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = i; k <= lines_number; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // milieu

    for (i = lines_number; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = i; k <= lines_number; k++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= lines_number; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k=i; k<= lines_number; k++) {
            printf("* ");
        }
        printf("\n");
    }    
}


// int stars_array[lines_number];
    // stars_array[0] = 1;
    // stars_array[1] = 2;
    // stars_array[2] = 3;
    // stars_array[3] = 4;
    // stars_array[4] = 5;

    // // lines_number is array size

    // // print all element of an array
    // int i;
    // for (i = 0; i < (sizeof(stars_array) / sizeof(stars_array[0])); i++) {
    //     printf("%d\n",stars_array[i]);
    // }


    // int array_size, i = 0;
    // while (stars_array[i] != 0) {
    //     array_size++;
    //     i++;
    // }
    // printf("%d\n", array_size);