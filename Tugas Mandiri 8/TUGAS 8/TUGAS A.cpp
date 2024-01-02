#include <stdio.h>

#define MAX_SIZE 11

int main() {
    int A[MAX_SIZE];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int index = 0;
    int i = 0;

    // a. Menyimpan nilai yang lebih besar dari 9 ke dalam array A
    printf("a. A ");
    for (; data[i] != 999; i++) {
        if (data[i] > 9) {
            A[index] = data[i];
            printf("%d ", A[index]);
            index++;
        }
    }
    printf("\n");

    // b. Menyimpan nilai yang lebih besar dari 9 ke dalam array A (kelompok 2 angka)
    printf("b. A ");
    for (i = 0; data[i] != 999; i++) {
        if (data[i] > 9) {
            if (data[i + 1] > 9) {
                printf("%d %d\n", data[i], data[i + 1]);
                i++;
            } else {
                printf("%d ", data[i]);
            }
        }
    }


    return 0;
}