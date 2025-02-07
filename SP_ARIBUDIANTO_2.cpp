// SP_ARIBUDIANTO_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi variabel
    int jumlahMotor, jumlahMobil;
    int jamMasuk, menitMasuk, jamKeluar, menitKeluar;
    int totalBiaya = 0;

    // Input jumlah kendaraan
    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;

    // Input jam masuk
    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Masukkan menit masuk (contoh 00): ";
    cin >> menitMasuk;

    // Input jam keluar
    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jamKeluar;
    cout << "Masukkan menit keluar (contoh 00): ";
    cin >> menitKeluar;

    // Menghitung durasi parkir dalam jam
    int totalMenitMasuk = jamMasuk * 60 + menitMasuk;
    int totalMenitKeluar = jamKeluar * 60 + menitKeluar;

    // Jika jam keluar lebih kecil dari jam masuk, berarti parkir sampai keesokan harinya
    if (totalMenitKeluar < totalMenitMasuk) {
        totalMenitKeluar += 24 * 60; // Tambahkan 24 jam dalam menit
    }

    int durasiParkir = totalMenitKeluar - totalMenitMasuk; // Durasi parkir dalam menit
    int jamParkir = (durasiParkir + 59) / 60; // Pembulatan ke atas untuk jam

    // Menghitung total biaya
    totalBiaya = (jumlahMotor * 2000 * jamParkir) + (jumlahMobil * 5000 * jamParkir);

    // Menampilkan hasil
    cout << fixed << setprecision(0); // Mengatur presisi output
    cout << "\n--- Rincian Biaya Parkir ---" << endl;
    cout << "Jumlah Motor: " << jumlahMotor << endl;
    cout << "Jumlah Mobil: " << jumlahMobil << endl;
    cout << "Durasi Parkir: " << jamParkir << " jam" << endl;
    cout << "Total Pendapatan: Rp " << totalBiaya << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
