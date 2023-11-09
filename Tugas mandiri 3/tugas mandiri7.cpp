#include <stdio.h>

int main() {
    int celcius;
    double fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &celcius);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    reamur = celcius * 4.0 / 5.0;

    // Menampilkan hasil
    printf("%d Celcius sama dengan %.2lf Fahrenheit\n", celcius, fahrenheit);
    printf("%d Celcius sama dengan %.2lf Reamur\n", celcius, reamur);

    return 0;
}