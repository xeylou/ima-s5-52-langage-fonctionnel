#include <stdio.h>

#define GRAS  "\e[1m"
#define OFF   "\e[m"

// ld => long int

int main() {
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour un coder un caractère "GRAS"char (%%c)"OFF"\n", sizeof(char), sizeof(char)*8);
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour coder un entier "GRAS"int (%%d)"OFF"\n", sizeof(int), sizeof(int)*8);
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour un coder un floattant "GRAS"float (%%f)"OFF"\n", sizeof(float), sizeof(float)*8);
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour coder un entier long "GRAS"long int (%%ld)"OFF"\n", sizeof(long int), sizeof(long int)*8);
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour un coder un double (long float) "GRAS"double (%%lf)"OFF"\n", sizeof(double), sizeof(double)*8);
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour coder un entier long long "GRAS"long long int (%%lld)"OFF"\n", sizeof(long long int), sizeof(long long int)*8);
    printf(GRAS"%ld octets"OFF" (%ld bits) sont utilisés pour un coder un double long "GRAS"long double (%%Lf)"OFF"\n", sizeof(long double), sizeof(long double)*8);
}
