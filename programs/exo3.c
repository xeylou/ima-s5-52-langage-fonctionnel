#include <stdio.h>

int main() {
    int input_age;
    printf("Quel est votre âge ?\nVotre âge : ");
    scanf("%d", &input_age);
    // printf("L'âge rentré est est %d.\n", input_age);
    if (input_age < 5) {
        printf("Tarif gratuit.\n");
    }
    if (input_age >= 5 && input_age <= 19) {
        printf("Le tarif est de 15€.\n");
    }
    if (input_age > 19 && input_age < 60) {
        printf("Le tarif est de 50.\n");
    }
    if (input_age > 60) {
        printf("Le tarif est de 10€.\n");
    }
}