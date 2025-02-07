// SP_ARIBUDIANTO_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//PROGRAM HITUNG GAJI KARYAWAN SNB CORPS
//menambahkan variabel gaji per jam

using namespace std;

int main() {
    // Deklarasi variabel
    string namaKaryawan;
    int golongan;
    int jamKerja;
    int gajiPokok;
    int uangLembur = 0;
    int totalGaji;

    // Input nama karyawan
    cout << "Masukkan nama anda: ";
    getline(cin, namaKaryawan);

    // Input golongan karyawan
    cout << "Masukkan golongan anda (1, 2, atau 3): ";
    cin >> golongan;

    // Input jam kerja
    cout << "Masukkan jam kerja anda per minggu: ";
    cin >> jamKerja;

    // Menentukan gaji pokok berdasarkan golongan
    switch (golongan) {
    case 1:
        gajiPokok = 25000 * jamKerja;
        break;
    case 2:
        gajiPokok = 35000 * jamKerja;
        break;
    case 3:
        gajiPokok = 50000 * jamKerja;
        break;
    default:
        cout << "Golongan tidak valid!" << endl;
        return 1; // Keluar dari program jika golongan tidak valid
    }

    // Menghitung uang lembur jika jam kerja lebih dari 48
    if (jamKerja > 48) {
        uangLembur = (jamKerja - 48) * 10000;
    }

    // Menghitung total gaji
    totalGaji = gajiPokok + uangLembur;

    // Menampilkan hasil
    cout << "\n--- Rincian Gaji Karyawan ---" << endl;
    cout << "Nama Karyawan: " << namaKaryawan << endl;
    cout << "Golongan: " << golongan << endl;
    cout << "Jam Kerja: " << jamKerja << " jam" << endl;
    cout << "Gaji Pokok: Rp " << gajiPokok << endl;
    cout << "Uang Lembur: Rp " << uangLembur << endl;
    cout << "Total Gaji: Rp " << totalGaji << endl;

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
