#include <stdio.h>
#include <assert.h>  // pour assertions
#include <string.h>  // pour chaines

int lowercase(char* input_char_ptr) {
    // la valeur pointée est une lettre majuscule
    if (*input_char_ptr >= 'A' && *input_char_ptr <= 'Z') {
        *input_char_ptr += 32;
        return 0;
    }
    else {
        return 1;
    }
}

int lowercase_string(char* input_string_ptr) {
    // rappel, un tableau marche comme un pointeur...
    int i;
    // sinon, retirer le strlen pour != 0 ou compris entre A-Z
    for (i=0; i < strlen(input_string_ptr); i++) {
        input_string_ptr[i] += 32;
    }
}

int swap(int* input_a_int, int* input_b_int) {
    int tmp_int = *input_a_int;
    *input_a_int = *input_b_int;
    *input_b_int = tmp_int;
    // printf("\na : %d, b : %d", *input_a_int, *input_b_int);
}

char concat_2(char* input_chaine_1, char* input_chaine_2) {
    int longueur_des_deux_chaines = strlen(input_chaine_1) + strlen(input_chaine_2);
    char chaine_finale[longueur_des_deux_chaines];
    int i;
    for (i=0; i < strlen(input_chaine_1); i++) {
        printf("i : %d, char : %c\n", i, input_chaine_1[i]);
        chaine_finale[i] = input_chaine_1[i];
    }
    int j, k;
    for (j=0; j < strlen(input_chaine_2); j++) {
        k = j + strlen(input_chaine_1);
        printf("j : %d, k = %d, char : %c\n", j, k, input_chaine_2[j]);
        chaine_finale[k] = input_chaine_2[j];
    }
    printf("%s", chaine_finale);
}

int main() {

    // char eg = 'A';
    // lowercase(&eg);  // &eg pointeur vers l'adresse mémoire de eg
    // assert(eg >= 'a' && eg <= 'z');  // vérifie le lowercase

    // char chaine_de_caracteres[100];
    // printf("Insérer une chaine de caractère :\n");
    // // %c char et %s string
    // scanf("%s", &chaine_de_caracteres);
    // lowercase_string(&chaine_de_caracteres);
    // printf("%s", chaine_de_caracteres);

    // int a = 5;
    // int b = 10;
    // swap(&a, &b);

    // 3 Concat
    // ATTENTION TABLEAU DIFFERENT AVEC DES POINTEURS
    char chaine_de_caracteres_1[100], chaine_de_caracteres_2[100];
    printf("Insérer une chaine de caractère :\n");
    scanf("%s", chaine_de_caracteres_1);
    printf("Insérer une deuxième chaine de caractère :\n");
    scanf("%s", chaine_de_caracteres_2);
    printf("%c", concat_2(chaine_de_caracteres_1, chaine_de_caracteres_2));

    return 0;
}