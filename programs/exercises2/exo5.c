#include <stdio.h>
#include <string.h>  // utilisation de la lib pour manipuler des chaines de caractères

/*
Compter le nombre de caractères passés dans un texte renseigné au clavier (minuscules only)
*/

int main() {

    // char est fait pour être un seul caractère, pas une liste
    char input_text[100];
    printf("Veuillez insérer votre texte :\n");
    // https://www.w3schools.com/c/c_strings.php
    // %c char et %s strings
    scanf("%s", &input_text);

    int input_text_length;
    input_text_length = strlen(input_text);

    //  =>  \"  to print double quote
    printf("Le texte \"%s\" est composé de %d caractère(s)", input_text, input_text_length);

    // à la main
    int tmp;
    tmp = sizeof(input_text);
    printf("%d octets", input_text);
    // https://www.freecodecamp.org/news/how-to-find-length-of-c-string-with-examples/
    // moi ai dit que taille 100 de base...
    /*
    char greeting[] = "Hello";
    int length = sizeof(greeting) - 1;
    printf("The length is %d\n", length);
    }
    ou
    int length = 0;
    while (greeting[length] != '\0') {
        length++;
    }
        printf("The length is %d", length );
    }

    */


    return 0;
}