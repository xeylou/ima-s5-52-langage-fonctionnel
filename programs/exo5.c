#include <stdio.h>
#include <math.h>

// -Wall, seed all warnings all
// -lm, link maths

float circle_surface(int input_radius) {
    float calculated_surface;
    calculated_surface = M_PI * pow(input_radius, 2);
    return calculated_surface;
}

float circle_perimeter(int input_radius) {
    float calculated_perimeter;
    calculated_perimeter = 2 * M_PI * input_radius;
    return calculated_perimeter;
}

int main() {
    float surface = circle_surface(1);
    printf("La surface du cercle est : %f\n", surface);
    float perimeter = circle_perimeter(1);
    printf("Le périmètre du cercle est : %f\n", perimeter);
}