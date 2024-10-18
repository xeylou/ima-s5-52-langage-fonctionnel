#include <stdio.h>
// #include <unistd.h>

// mettre un espace si après plusieurs scan



int main() {
    char input_first_letter, input_second_letter, input_third_letter;
    printf("Quelle est la première lettre du premier prénom ?\nPremière lettre du 1ier prénom : ");
    scanf(" %c", &input_first_letter);
    // sleep(1);
    printf("\nQuelle est la première lettre du deuxième prénom ?\nPremière lettre du 2ième prénom : ");
    scanf(" %c", &input_second_letter);
    printf("\nQuelle est la première lettre du troisième prénom ?\nPremière lettre du 3ième prénom : ");
    scanf(" %c", &input_third_letter);
    // printf("%c,%c,%c\n", input_first_letter, input_second_letter, input_third_letter);
    // if(input_first_letter < input_second_letter) printf("oui");
    
    // A plus petit que B qui est plus petit de C

    /// int letters[3] = {input_first_letter, input_second_letter, input_third_letter};

    // il veut qu'on fasse 40 if, flemme

    // dans un char tu peux faire prenom[0] pour prendre le premier character du prénom
}