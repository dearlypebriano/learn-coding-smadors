#include <stdio.h>

int main() {
    double luas, alas, tinggi;

    printf("Masukkan alas segitiga: ");
    scanf("%lf", &alas);

    printf("Masukkan tinggi segitiga: ");
    scanf("%lf", &tinggi);

    luas = 0.5 * alas * tinggi;
    printf("Luas segitiga siku-siku: %.2lf\n", luas);

    return 0;
}
