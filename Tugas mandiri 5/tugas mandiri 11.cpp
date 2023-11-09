#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, harga_setelah_diskon;

    printf("Masukkan kode: ");
    scanf("%d", &kode);

    printf("Masukkan jenis (A, B, atau C): ");
    scanf(" %c", &jenis);

    printf("Masukkan harga: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis tidak valid.\n");
            return 1; // Keluar dari program dengan kode kesalahan
    }

    harga_setelah_diskon = harga - (diskon * harga);

    printf("Harga setelah diskon: %.2f\n", harga_setelah_diskon);

    return 0; // Program selesai tanpa kesalahan
}
