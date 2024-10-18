#include <stdio.h>
#include <math.h>

float points_calculus(char input_letter, int input_age, float input_time, float input_distance) {
    float total_points, performance_calculus, race_time;
    race_time = input_distance / input_time;
    performance_calculus = pow(race_time, 2);
    total_points = performance_calculus / input_age;
    return total_points;
}

int main() {
    char input_first_letter, input_second_letter;
    int input_first_age, input_second_age;
    float input_first_time, input_second_time, person_a_points, person_b_points, input_first_distance, input_second_distance;
    printf("Quelle est la première lettre du prénom du premier coureur ?\n");
    scanf(" %c", &input_first_letter);
    printf("Quel est l'âge du premier coureur ?\n");
    scanf(" %d", &input_first_age);
    printf("Quel est le temps du premier coureur ?\n");
    scanf(" %f", &input_first_time);
    printf("Quel est la distance parcourue par le premier coureur ?\n");
    scanf(" %f", &input_first_distance);
    printf("Quelle est la première lettre du prénom du deuxième coureur ?\n");
    scanf(" %c", &input_second_letter);
    printf("Quel est l'âge du deuxième coureur ?\n");
    scanf(" %d", &input_second_age);
    printf("Quel est le temps du deuxième coureur ?\n");
    scanf(" %f", &input_second_time);
    printf("Quel est la distance parcourue par le deuxième coureur ?\n");
    scanf(" %f", &input_second_distance);
    person_a_points = points_calculus(input_first_letter, input_first_age, input_first_time, input_first_distance);
    person_b_points = points_calculus(input_second_letter, input_second_age, input_second_time, input_second_distance);
    printf("%f %f\n", person_a_points, person_b_points);
    if (person_a_points > person_b_points) {
        printf("Le gagnant est le coureur A avec %f points\n", person_a_points);
        if (input_first_letter < input_second_letter) {
            printf("Bravo !\n");
        }
        else {
            printf("Désolé...\n");
        }
    }
    else {
        printf("Le gagnant est le coureur B avant %f points\n", person_b_points);
        if (input_second_letter < input_first_letter) {
            printf("Bravo !\n");
        }
        else {
            printf("Désolé...\n");
        }
    }
}