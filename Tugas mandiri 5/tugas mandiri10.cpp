#include <iostream>

int main() {
    int jamMasuk, jamPulang;
    
    std::cout << "Masukkan jam masuk: ";
    std::cin >> jamMasuk;
    
    std::cout << "Masukkan jam pulang: ";
    std::cin >> jamPulang;
    
    // Menentukan lama bekerja
    int lamaBekerja;
    
    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {
        lamaBekerja = (12 - jamMasuk) + jamPulang;
    }
    
    std::cout << "Lama bekerja " << lamaBekerja << " jam" << std::endl;
    
    return 0;
}
