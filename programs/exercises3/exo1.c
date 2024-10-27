#include <stdio.h>
#include <math.h>  // to do great expressions

float newton_sqrt(float input_initial_number) {
    float transitive_number;
    transitive_number = input_initial_number;

    int i;
    for (i = 1; i <= 15; i++) {
        transitive_number = transitive_number - ((pow(transitive_number, 2) - input_initial_number) / ( 2 * transitive_number));
        printf("%f\n", transitive_number);
    }
}

int main() {
    float initial_number = 5;

    newton_sqrt(initial_number);

    return 0;
}