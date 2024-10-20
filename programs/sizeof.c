#include <stdio.h>

// ld => long int

int main() {
    printf("%ld octets sont utilisés pour un entier\n", sizeof(int));
    printf("%ld octets sont utilisés pour un float\n", sizeof(float));
    printf("%ld octets sont utilisés pour un double\n", sizeof(double));
}
