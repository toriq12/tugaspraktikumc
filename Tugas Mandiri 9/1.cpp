#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19}; // Array dengan 11 elemen
    int N, i;
    int ada = 0; // variabel untuk menandai keberadaan nilai N

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("Array yang ada:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
        if (A[i] == N) {
            ada = 1; // Ubah nilai menjadi 1 jika ada nilai yang sama dengan N
        }
    }

    printf("\n");

    if (ada) {
        printf("ADA\nLokasi bilangan yang sama: ");
        for (i = 0; i < 11; i++) {
            if (A[i] == N) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
