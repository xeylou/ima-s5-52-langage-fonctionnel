#include <stdio.h>

// définition d'une fonction pour vérifier si entre, proprement
#define between(value, min, max) (value < max && value > min)

/* Enregistrer 5 nombres dans un
entier de 32 bits (5*6 bits) */

int main() {
    int input_first_integer, input_second_integer, input_third_integer, input_fourth_integer, input_fifth_integer;
    do {
        printf("Renseignez successivement 5 entiers entre 0 et 63 :\n");
    } while (scanf("%d %d %d %d %d", &input_first_integer, &input_second_integer, &input_third_integer, &input_fourth_integer, &input_fifth_integer)!=5);
    printf("%d %d %d %d %d", input_first_integer, input_second_integer, input_third_integer, input_fourth_integer, input_fifth_integer);

    // vérifie si un entier est bien donné et si entre les valeurs
    // ne pas oublier le % au scanf
    // le & signifie que cette valeur pointée vers l'autre valeur (pointeur)
    // tu peux scanf plusieurs valeurs et il va reconnaitre l'espace !
    // if (scanf("%d %d %d %d %d", &input_first_integer, &input_second_integer, &input_third_integer, &input_fourth_integer, input_fifth_integer)==1 && between(input_first_integer, 0, 63)) {
    //    printf("OK");
    //}


}