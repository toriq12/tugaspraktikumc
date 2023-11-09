#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("Bilangan ini adalah GENAP\n");
    } else {
        printf("Bilangan ini adalah GANJIL\n");
    }

    return 0;
}