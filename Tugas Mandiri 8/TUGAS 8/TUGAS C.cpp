#include <stdio.h>

int main() {
    int A[11];
    int nilai;
    int indeks = 0;

    printf("Masukkan data satu persatu (akhiri dengan 999):\n");
    do {
        printf("Data ke-%d: ", indeks + 1);
        scanf("%d", &nilai);

        if (nilai > 9) {
            A[indeks] = nilai;
            indeks++;
        }

    } while (nilai != 999 && indeks < 11);

    printf("\nArray A setelah diisi:\n");
    for (int i = 0; i < indeks; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
