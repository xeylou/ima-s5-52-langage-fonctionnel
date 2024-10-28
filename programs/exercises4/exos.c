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
    printf("\na : %d, b : %d", *input_a_int, *input_b_int);
}

int main() {

    char eg = 'A';
    lowercase(&eg);  // &eg pointeur vers l'adresse mémoire de eg
    assert(eg >= 'a' && eg <= 'z');  // vérifie le lowercase

    char chaine_de_caracteres[100];
    printf("Insérer une chaine de caractère :\n");
    // %c char et %s string
    scanf("%s", &chaine_de_caracteres);
    lowercase_string(&chaine_de_caracteres);
    printf("%s", chaine_de_caracteres);

    int a = 5;
    int b = 10;
    swap(&a, &b);

    return 0;
}