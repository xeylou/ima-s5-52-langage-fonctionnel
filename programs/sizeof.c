#include <stdio.h>

// ld => long int

int main() {
    printf("%ld octets sont utilisés pour coder un entier en mémoire\n", sizeof(int));
    printf("%ld octets sont utilisés pour un coder un float en mémoire\n", sizeof(float));
    printf("%ld octets sont utilisés pour un coder un double en mémoire\n", sizeof(double));
}
