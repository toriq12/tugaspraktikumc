#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Fungsi untuk mengaktifkan motor listrik dengan kecepatan tertentu
void activateMotor(int speed) {
    printf("Motor berputar dengan kecepatan %d rpm\n", speed);
    // Logika untuk mengaktifkan motor
}

// Fungsi untuk membuka dan menutup klep pengisian/pembuangan air
void controlValve(int isOpen) {
    if (isOpen) {
        printf("Klep terbuka\n");
        // Logika untuk membuka klep
    } else {
        printf("Klep tertutup\n");
        // Logika untuk menutup klep
    }
}

// Fungsi untuk membaca nilai kekeruhan air dari sensor turbidimeter
int readTurbidity() {
    // Logika untuk membaca nilai dari sensor turbidimeter
    return 0; // Gantilah dengan nilai sebenarnya
}

int main() {
    // Array untuk menyimpan level kekeruhan air
    int turbidityLevels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

    // Inisialisasi waktu pencucian dan jeda
    int washTime = 0; // Gantilah dengan waktu sebenarnya
    int drainTime = 2; // Waktu pembuangan air kotor
    int dryTime = 3; // Waktu pengeringan

    // Tombol Start ditekan
    printf("Tombol Start ditekan\n");

    // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    controlValve(1);
    sleep(2 * 60); // Tidur selama 2 menit

    // Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air utama
    int mainTurbidity = readTurbidity();
    printf("Level kekeruhan air utama: %d NTU\n", mainTurbidity);

    // Motor listrik berputar sesuai level kekeruhan air
    int levelIndex;
    for (levelIndex = 0; levelIndex < sizeof(turbidityLevels) / sizeof(turbidityLevels[0]); levelIndex++) {
        if (mainTurbidity <= turbidityLevels[levelIndex]) {
            break;
        }
    }
    activateMotor(levelIndex + 1);

    // Motor listrik utama berhenti pada setiap pertengahan waktu
    sleep(washTime / 2);

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis
    controlValve(0);
    sleep(drainTime * 60); // Tidur selama 2 menit

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    activateMotor(2000);
    sleep(dryTime * 60); // Tidur selama 3 menit

    // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    controlValve(1);
    sleep(2 * 60); // Tidur selama 2 menit

    // Motor listrik utama berputar selama sisa waktu mencuci
    sleep(washTime / 2);

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    controlValve(0);
    sleep(drainTime * 60); // Tidur selama 2 menit

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    activateMotor(2000);
    sleep(dryTime * 60); // Tidur selama 3 menit

    // Proses mencuci selesai
    printf("Proses mencuci selesai\n");

    return 0;
}