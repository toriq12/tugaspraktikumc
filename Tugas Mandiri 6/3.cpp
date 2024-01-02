#include <stdio.h>

int main() {
    int i, num = 1;

    // Loop untuk mencetak deret angka
    for (i = 0; i <= 10; i++) {
        printf("%d ", num);
        num *= 2; // Setiap iterasi, nilai dikalikan dengan 2
    }

    return 0;
}
