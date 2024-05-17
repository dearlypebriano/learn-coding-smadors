#include <stdio.h>

int main() {
    int bilanganPertama, bilanganKetiga;
    float bilanganKedua;

    scanf("%d %f %d", &bilanganPertama, &bilanganKedua, &bilanganKetiga);
    printf("%d\n", bilanganPertama);
    printf("%.2f\n", bilanganKedua);
    printf("%d\n", bilanganKetiga);

    return 0;
}