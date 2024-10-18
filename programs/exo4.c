#include <stdio.h>

int valeur_absolue(int input_number) {
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
        printf("Le plus grand nombre renseigné est votre premier (%d)\n", input_int_a);
    }
    else{
        printf("Le plus grand nombre renseigné est votre deuxième (%d)\n", input_int_b);
    }
    int a_absolu = valeur_absolue(input_int_a);
    int b_absolu = valeur_absolue(input_int_b);
    printf("La valeur du premier nombre est %d, et celle du deuxième est %d\n", a_absolu, b_absolu);
    if (a_absolu > b_absolu) {
        printf("Le premier nombre a la plus grande valeur absolue (%d)\n", a_absolu);
    }
    else {
        printf("Le deuxième nombre a la plus grande valeur asbolue (%d)\n", b_absolu);
    }
}