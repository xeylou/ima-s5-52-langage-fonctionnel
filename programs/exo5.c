#include <stdio.h>
#include <math.h>

// -Wall see all warnings
// -lm link maths

// floatant car à virgule, utilisation de PI
float circle_surface(float input_radius) {
    float calculated_surface;
    calculated_surface = M_PI * pow(input_radius, 2);
    return calculated_surface;
}

float circle_perimeter(float input_radius) {
    float calculated_perimeter;
    calculated_perimeter = 2 * M_PI * input_radius;
    return calculated_perimeter;
}

int main() {
    float input_radius;
    printf("Quelle est la taille du rayon du cercle ?\n");
    scanf("%f", &input_radius);
    float surface = circle_surface(input_radius);
    printf("La surface du cercle est : %f\n", surface);
    float perimeter = circle_perimeter(input_radius);
    printf("Le périmètre du cercle est : %f\n", perimeter);
}