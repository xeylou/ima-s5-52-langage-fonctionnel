#include <stdio.h>

int main() {
    printf("%ld octets utilisés pour un entier\n", sizeof(int));
    printf("%ld octets utilisés pour un float\n", sizeof(float));
    printf("%ld octets utilisés pour un double\n", sizeof(double));
}