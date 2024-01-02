#include <stdio.h>

int main() {
  // Deklarasikan array A berukuran 12 dan isi datanya
  int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};

  // Hitung jumlah elemen array A
  int jumlah_elemen = sizeof(A) / sizeof(A[0]);

  // Hitung nilai total elemen array A
  int total_nilai = 0;
  for (int i = 0; i < jumlah_elemen; i++) {
    total_nilai += A[i];
  }

  // Hitung nilai rata-rata
  float rata_rata = (float) total_nilai / jumlah_elemen;

  // Deklarasikan array B dan C
  int B[12] = {0};
  int C[12] = {0};

  // Pindahkan nilai ke array B dan C berdasarkan perbandingan dengan nilai rata-rata
  for (int i = 0; i < jumlah_elemen; i++) {
    if (A[i] > rata_rata) {
      B[i] = A[i];
    } else if (A[i] < rata_rata) {
      C[i] = A[i];
    }
  }

  // Tampilkan isi array A, B, dan C
  printf("Nilai Array A:\n");
  for (int i = 0; i < jumlah_elemen; i++) {
    printf("%d ", A[i]);
  }
  printf("\n\nNilai Array B:\n");
  for (int i = 0; i < jumlah_elemen; i++) {
    printf("%d ", B[i]);
  }
  printf("\n\nNilai Array C:\n");
  for (int i = 0; i < jumlah_elemen; i++) {
    printf("%d ", C[i]);
  }

  return 0;
}
