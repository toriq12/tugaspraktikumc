#include <stdio.h>

int main() {
    double saldo_awal = 1000000.0; // Saldo awal Rp. 1.000.000
    double suku_bunga = 0.02; // Suku bunga 2% per bulan
    int bulan = 10; // Jumlah bulan

    int i;
    double saldo = saldo_awal;

    // Menghitung saldo setelah 10 bulan dengan bunga tambahan setiap bulan
    for (i = 0; i < bulan; i++) {
        double bunga_bulan_ini = saldo * suku_bunga;
        saldo = saldo + bunga_bulan_ini;
    }

    printf("Jumlah uang setelah %d bulan adalah Rp. %.2f\n", bulan, saldo);

    return 0;
}
