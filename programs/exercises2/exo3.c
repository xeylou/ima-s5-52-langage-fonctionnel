#include <stdio.h>

int main() {

    /*
    i et j une matrice avec i en ligne et j en colonne
    k pour tout ce qui va être à droite
    lines_number ce qu'on va lui renseigner
    */
    int i, j, k, lines_number;
    printf("\nNombre de lignes = ");
    scanf("%d", &lines_number);
    printf("\n");

    char horizontal_orientation;
    printf("Quelle doit être l'orientation horizontale ? (G/d) ");
    scanf(" %c", &horizontal_orientation);
    printf("\n");


    char vertical_orientation;
    printf("Quelle doit être l'orientation verticale ? (B/h) ");
    scanf(" %c", &vertical_orientation);
    printf("\n");

    // printf("[DEBUG] horizontal : %c\nvertical : %c\n\n", horizontal_orientation, vertical_orientation);

    // mettre des breaks... pourquoi?
    switch ( horizontal_orientation ) {
        case 'g':
            switch ( vertical_orientation ) {
                case 'b':
                // gauche qui pointe vers le bas

                // i commence au nombre de lignes entrés (5 par exemple), on le décrémente jusqu'à ce qu'il soit égal à 1 (quand à 0 il ne le fait plus, sort de la boucle) => 5, 4, 3, 2, 1
                    for (i = lines_number; i >= 1; i--) {
                        // j va à l'inverse de i : commence à 1 et FAIT UNE BOUCLE ENTIERE jusqu'à ce qu'il atteingne i (donc quand i est à 5, il va jusqu'à 5 et affiche 5 étoiles, quand i est à 4 il va jusqu'à i dans une autre boucle et va jusqu'à 4, etc.)
                        for (j = 1; j <= i; j++) {
                            printf("* ");
                        }
                        printf("\n");
                    }
                    printf("\n");
                    break;
                // gauche qui pointe vers le haut
                case 'h':
                    for (i = 1; i <= lines_number; i++) {
                        for (j = 1; j <= i; j++) {
                            printf("* ");
                        }
                        printf("\n");
                    }
                    printf("\n");
                    break;
            }
        break; // break ici important aussi
        case 'd':
            switch ( vertical_orientation ) {
                // droite qui pointe vers le bas
                    case 'b':
                    // i => 1, 2, 3, 4, 5
                        for (i = 1; i <= lines_number; i++) {
                            // ici pour faire le décalage pour les mettre à droite à chaque fois, je décale de i :)

                            // i = 1, j = 1
                            // i = 2, j = 1, 2
                            for (j = 1; j <= i; j++) {
                                printf(" ");
                            }

                            // mon ancien j, il est là
                            // i = 1, k = 1, 2, 3, 4, 5 (5 étoiles, avec J = 1, 1 espace)
                            // i = 2, k = 2, 3, 4, 5 (4 étoiles, avec J = 2, 2 espaces)
                            for (k = i; k <= lines_number; k++) {
                                printf("*");
                            }
                            printf("\n");
                        }
                        printf("\n");
                        break;
                    // droite qui pointe vers le haut
                    case 'h':
                        for (i = lines_number; i >= 1; i--) {
                            for (j = 1; j <= i; j++) {
                                printf(" ");
                            }
                            for (k = i; k <= lines_number; k++) {
                                printf("*");
                            }
                            printf("\n");
                        }
                        printf("\n");
                        break;
            }
    }

}

    // // gauche haut vers bas

    // for (i = lines_number; i >= 1; i--) {
    //     for (j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // // gauche bas vers haut

    // for (i = 1; i <= lines_number; i++) {
    //     for (j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // // droite bas vers haut

    // for (i = lines_number; i >= 1; i--) {
    //     for (j = 1; j <= i; j++) {
    //         printf(" ");
    //     }
    //     for (k = i; k <= lines_number; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // // droite haut vers bas

    // for (i = 1; i <= lines_number; i++) {
    //     for (j = 1; j <= i; j++) {
    //         printf(" ");
    //     }
    //     for (k = i; k <= lines_number; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // milieu bas vers haut

//     for (i = lines_number; i >= 1; i--) {
//         for (j = 1; j <= i; j++) {
//             printf(" ");
//         }
//         for (k = i; k <= lines_number; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     printf("\n");

//     // milieu haut vers bas

//     for (i = 1; i <= lines_number; i++) {
//         for (j = 1; j <= i; j++) {
//             printf(" ");
//         }
//         for (k=i; k<= lines_number; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// int stars_array[lines_number];
    // stars_array[0] = 1;
    // stars_array[1] = 2;
    // stars_array[2] = 3;
    // stars_array[3] = 4;
    // stars_array[4] = 5;

    // // lines_number is array size

    // // print all element of an array
    // int i;
    // for (i = 0; i < (sizeof(stars_array) / sizeof(stars_array[0])); i++) {
    //     printf("%d\n",stars_array[i]);
    // }


    // int array_size, i = 0;
    // while (stars_array[i] != 0) {
    //     array_size++;
    //     i++;
    // }
    // printf("%d\n", array_size);