#include <iostream>

int main() {
    int jamMasuk, jamKeluar;
    
    std::cout << "Masukkan jam masuk: ";
    std::cin >> jamMasuk;
    
    std::cout << "Masukkan jam keluar: ";
    std::cin >> jamKeluar;
    
    if (jamMasuk < 0 || jamMasuk > 24 || jamKeluar < 0 || jamKeluar > 24) {
        std::cout << "Jam masuk atau jam keluar tidak valid." << std::endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }
    
    int lamaParkir = jamKeluar - jamMasuk;
    int biayaParkir;
    
    if (lamaParkir <= 2) {
        biayaParkir = 2000;
    } else {
        biayaParkir = 2000 + (lamaParkir - 2) * 500;
    }
    
    std::cout << "Biaya parkir: " << biayaParkir << " rupiah" << std::endl;
    
    return 0; // Program selesai tanpa kesalahan
}
