#include <stdio.h>

/**
The warning says i need to verify what is 
passed in scanf like so

int input_int;
    if (scanf("%d", &input_int) == 1) {
        printf("L'entier entré est %d.\n", input_int);
**/

int main() {
    int input_int; // initialise la variable
    scanf("%d", &input_int); // %d pour dire qu'on attend un entier
    printf("L'entier entré est %d.\n", input_int);
    if (input_int % 2 == 0) { // input_int est pair
        printf("%d est un nombre pair.\n", input_int);
    }
    else { // input_int est impair
        printf("%d est un nombre impair.\n", input_int);
    }
}