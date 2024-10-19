#include <stdio.h>

int valeur_absolue(int input_number) {
    /* Si nombre négratif, juste nombre = - l'ancien nombre
    Sinon on ne touche à rien et on retourne le nombre normal */
    if(input_number < 0) {
        input_number=-input_number;
    }
    return input_number;
} 

int main() {
    int input_int_a, input_int_b;
    printf("Quel est votre premier nombre ?\nRenseignez votre premier entier : ");
    scanf("%d", &input_int_a);
    printf("Quel est votre deuxième nombre ?\nRenseignez votre deuxième entier : ");
    scanf("%d", &input_int_b);
    if (input_int_a > input_int_b) {
        printf("Le plus grand nombre renseigné est votre premier (%d).\n", input_int_a);
    }
    else{
        printf("Le plus grand nombre renseigné est votre deuxième (%d).\n", input_int_b);
    }
    int a_absolu = valeur_absolue(input_int_a);
    int b_absolu = valeur_absolue(input_int_b);
    printf("La valeur absolue de votre premier nombre est %d, et celle de votre deuxième %d.\n", a_absolu, b_absolu);
    if (a_absolu > b_absolu) {
        printf("Le premier nombre à la plus grande valeur absolue est %d.\n", a_absolu);
    }
    else {
        printf("Le deuxième nombre à la plus grande valeur asbolue est votre deuxième (%d).\n", b_absolu);
    }
}