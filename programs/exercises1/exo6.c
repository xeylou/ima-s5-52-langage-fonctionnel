#include <stdio.h>
// #include <unistd.h>

// mettre un espace si après plusieurs scan

int main() {
    char input_first_letter, input_second_letter, input_third_letter;
    printf("Quelle est la première lettre du premier prénom ?\nPremière lettre du 1ier prénom : ");
    scanf(" %c", &input_first_letter);
    printf("\nQuelle est la première lettre du deuxième prénom ?\nPremière lettre du 2ième prénom : ");
    scanf(" %c", &input_second_letter);
    printf("\nQuelle est la première lettre du troisième prénom ?\nPremière lettre du 3ième prénom : ");
    scanf(" %c", &input_third_letter);
    if(input_first_letter < input_second_letter) {
        if(input_second_letter < input_third_letter ) {
            printf("%c %c %c", input_first_letter, input_second_letter, input_third_letter);
        }
        else {
            printf("%c %c %c", input_first_letter, input_third_letter, input_second_letter);
        }
    }
    if (input_second_letter < input_first_letter) {
        if(input_first_letter < input_third_letter ) {
            printf("%c %c %c", input_second_letter, input_first_letter, input_third_letter);
        }
        else {
            printf("%c %c %c", input_second_letter, input_third_letter, input_first_letter);
        }
    }

    // Pas besoin de le faire pour le 3ième

    // printf("%c,%c,%c\n", input_first_letter, input_second_letter, input_third_letter);
    // if(input_first_letter < input_second_letter) printf("oui");

    // dans un char tu peux faire prenom[0] pour prendre le premier character du prénom
}