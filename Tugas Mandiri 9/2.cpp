#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'}; // Array dengan 10 elemen
    char C;
    int i, count = 0;
    int ada = 0; // variabel untuk menandai keberadaan karakter C

    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &C); // Menerima input karakter

    printf("Array yang ada:\n");
    for (i = 0; i < 10; i++) {
        printf("%c ", A[i]);
        if (A[i] == C) {
            ada = 1; // Ubah nilai menjadi 1 jika ada karakter yang sama dengan C
            count++; // Hitung jumlah kemunculan karakter C
        }
    }

    printf("\n");

    if (ada) {
        printf("ADA\nJumlah karakter yang sama: %d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
