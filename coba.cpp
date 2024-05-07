#include<stdio.h>

int main() {

    // Mendeklarasikan beberapa variable
    int a, b, penjumlahan, pengurangan, perkalian, pembagian, modulus;

    // Mengambil input dari user
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // method penjumlahan
    penjumlahan = a + b;

    // Method pengurangan
    pengurangan = a - b;

    // Method Perkalian
    perkalian = a * b;

    // Method Pembagian
    pembagian = a / b;

    // Modulus Sisa Bagi
    modulus = a % b;

    printf("Hasil Penjumlahan: %d\n", penjumlahan);
    printf("Hasil Pengurangan: %d\n", pengurangan);
    printf("Hasil Perkalian: %d\n", perkalian);
    printf("Hasil Pembagian: %d\n", pembagian);
    printf("Hasil Modulus: %d\n", modulus);

    return 0;
}
