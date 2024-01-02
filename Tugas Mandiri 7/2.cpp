#include <stdio.h>

int main() {
    int A[11]; // Array dengan 11 elemen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Data yang akan dimasukkan
    int i, j = 0;

    // Memasukkan data ke dalam array A yang berisi nilai genap
    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { // Menyimpan nilai genap saja
            A[j] = data[i];
            j++;
        }
    }

    // Mencetak isi array A
    printf("Isi array setelah menyimpan nilai genap:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
