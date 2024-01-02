#include <stdio.h>

int main() {
    int A[11]; // Mendefinisikan array A dengan ukuran 11

    // Memulai proses input data
    printf("Masukkan data ke dalam array (hingga 11 data):\n");

    // Membaca input data satu persatu
    for (int i = 0; i < 11; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Menampilkan isi array yang disimpan
    printf("Data yang disimpan dalam array:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
