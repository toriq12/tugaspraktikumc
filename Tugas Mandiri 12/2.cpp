#include <stdio.h>
#include <string.h>

int main() {
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A'}; // Array dengan 11 elemen
    int counts[26] = {0}; // Array untuk menyimpan jumlah kemunculan tiap huruf
    int i, maxCount = 0, maxIndex = 0;

    // Menghitung jumlah kemunculan tiap huruf dalam array A
    for (i = 0; i < 11; i++) {
        int index = A[i] - 'A';
        counts[index]++;
        if (counts[index] > maxCount) {
            maxCount = counts[index];
            maxIndex = index;
        }
    }

    // Mencetak huruf yang paling sering muncul dan jumlah kemunculannya
    printf("Huruf yang paling sering muncul: %c\n", 'A' + maxIndex);
    printf("Jumlah kemunculan: %d\n", maxCount);

    return 0;
}
