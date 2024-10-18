#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("L'entier entré est %d.\n", n);
    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    }
    else {
        printf("%d est un nombre impair.\n", n);
    }
}