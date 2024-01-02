#include <stdio.h>

int main() {
    int kecepatan = 2; // Kecepatan dalam meter/detik
    int waktu = 100; // Waktu dalam detik
    int jarak;

    // Menghitung jarak yang ditempuh
    jarak = kecepatan * waktu;

    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}
