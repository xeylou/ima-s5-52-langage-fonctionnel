#include <stdio.h>
#include <math.h>  // to do great expressions
#include <time.h>

int first_value() {
    return (int) time(NULL) % 16;
}

float newton_sqrt(float input_initial_number) {
    float transitive_number = input_initial_number;

    int i;
    for (i = 1; i <= 15; i++) {
        transitive_number = transitive_number - ((pow(transitive_number, 2) - input_initial_number) / ( 2 * transitive_number));
    }
    return transitive_number;
}

float distance_between_two_points(float input_pointa_xaxis, float input_pointa_yaxis, float input_pointb_xaxis, float input_pointb_yaxis) {

    float tmp = pow((input_pointb_xaxis - input_pointa_xaxis), 2) + pow((input_pointb_yaxis - input_pointa_yaxis), 2);
    // printf("[DEBUG] tmp : %f\n", tmp);
    float distance_between_points = newton_sqrt(tmp);
    //printf("[DEBUG] distance_between_points : %f\n", distance_between_points);

    return distance_between_points;
}

int random_generator() {

    int input_a_number, input_c_number, input_m_number, input_seed;
    printf("Choisir le nombre a : ");
    scanf("%d", &input_a_number);
    printf("Choisir le nombre c : ");
    scanf(" %d", &input_c_number);
    printf("Choisir le nombre m : ");
    scanf(" %d", &input_m_number);
    printf("\n[DEBUG] input_a_number : %d\n        input_c_number : %d\n        input_m_number : %d\n", input_a_number, input_c_number, input_m_number);

    printf("\nChoisir la graine : ");
    scanf("%d", &input_seed);

    printf("\n[DEBUG] input_seed : %d\n", input_seed);

    printf("\n\n[DEBUG] random 10* times :\n");
    int i;
    for (i = 1; i <=9; i++) {
        printf("%d\n", input_seed);
         input_seed = (input_seed * input_a_number + input_c_number) % input_m_number;
    }

    // input_seed = (input_seed * input_a_number + input_c_number) % input_m_number;
    // int random_gen_result2 = (random_gen_result * input_a_number + input_c_number) % input_m_number;

    return input_seed;
}

int random(int input_a_number, int input_c_number, int input_m_number) {

    static int seed = 125;
    printf("\n[DEBUG] input_a_number : %d\n        input_c_number : %d\n        input_m_number : %d\n", input_a_number, input_c_number, input_m_number);

    printf("\n[DEBUG] seed : %d\n", seed);

    seed = (seed * input_a_number + input_c_number) % input_m_number;
    printf("\n[DEBUG] seed : %d\n", seed);

    return seed;
}

int random2() {

    int seed = first_value();
    // printf("\n[DEBUG] input_a_number : %d\n        input_c_number : %d\n        input_m_number : %d\n", input_a_number, input_c_number, input_m_number);

    // printf("\n[DEBUG] seed : %d\n", seed);

    seed = (seed * 75 + 74) % 65537;
    // printf("\n[DEBUG] seed : %d\n", seed);

    return seed;
}

int demande_mise(int argent) {
    int input_mise;
    printf("Combien voulez-vous parier ? (vous avez %d euros) ", argent);
    scanf("%d", &input_mise);
    if (argent < input_mise) {
        printf("Veuillez séléctionner une mise que vous pouvez vous permettre");
        demande_mise(argent);
    }
    else {
        return input_mise;
    }
}


int demande_pari() {
    int input_pari;
    printf("Vous souhaitez parier sur quel nombre ? ");
    scanf("%d", &input_pari);
    printf("[DEBUG] input_pari : %d", input_pari);
    return input_pari;
    
}

int main() {
    // // 1
    // printf("%f", newton_sqrt(5));

    // // 2
    // printf("%f", distance_between_two_points(1.0, 2.0, 3.0, 4.0));

    // // 3
    // printf("%d", random_generator());
    // printf("%d", random(75, 74, 65537));

    // 4
    // printf("%d", first_value());  ++1

    int argent = 50;
    int mise, pari;
    while(argent > 0 && argent < 30000){
        printf("vous avez %d euros\n", argent);
        mise = demande_mise(argent);
        printf("vous misez : %d\n", mise);
        pari = demande_pari();
        printf("vous avez parié : %d\n", pari);
        // int resultat = 1 + alea() % 6;
        int resultat = 1 + random2() % 6;  // résultats : 6, déjà eu 3
        printf("resultat du lancer : %d\n", resultat);
        if (pari == resultat){
            printf("vous gagnez : %d\n", 2 * mise);
            argent += 2*mise;
        } else {
            printf("vous perdez la mise\n");
            argent -= mise;
        }
    }
    if (argent){
        printf ("bravo, vous avez ruiné le casino\n");
    } else {
        printf("vous êtes ruinés\n");
    }

    return 0;
}