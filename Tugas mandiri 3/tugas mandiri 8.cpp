#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas, sisi_tinggi, sisi_miring;

    // Input panjang sisi alas dan sisi tinggi
    printf("Masukkan panjang sisi alas (cm): ");
    scanf("%lf", &sisi_alas);
    printf("Masukkan panjang sisi tinggi (cm): ");
    scanf("%lf", &sisi_tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt(pow(sisi_alas, 2) + pow(sisi_tinggi, 2));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga: %.2lf cm\n", sisi_miring);

    return 0;
}