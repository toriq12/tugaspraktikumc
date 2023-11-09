#include <stdio.h>
#include <math.h>

int main() {
    double alas, tinggi, luas, keliling;

    // Input panjang alas dan tinggi
    printf("Masukkan panjang alas (cm): ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi (cm): ");
    scanf("%lf", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung keliling segitiga (dengan asumsi segitiga sembarang)
    keliling = alas + tinggi + sqrt(alas * alas + tinggi * tinggi);

    // Menampilkan hasil
    printf("Luas segitiga: %.2lf cm^2\n", luas);
    printf("Keliling segitiga: %.2lf cm\n", keliling);

    return 0;
}