#include <iostream>
using namespace std;

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
    int gajiPokokPerJam = 7500;
    if (jamKerja > 8) {
        return 8 * gajiPokokPerJam; // Gaji pokok hanya dihitung untuk 8 jam
    }
    return jamKerja * gajiPokokPerJam;
}

// Fungsi untuk menghitung uang lembur
int lembur(int jamKerja) {
    int gajiPokokPerJam = 7500;
    if (jamKerja > 8) {
        return (jamKerja - 8) * 1.5 * gajiPokokPerJam; // Kelebihan dihitung lembur
    }
    return 0; // Tidak ada lembur jika bekerja <= 8 jam
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000; // Uang makan untuk jam kerja >= 9 jam
    }
    return 0; // Tidak ada uang makan jika bekerja < 9 jam
}

// Fungsi untuk menghitung uang transport lembur
int transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000; // Uang transport untuk jam kerja >= 10 jam
    }
    return 0; // Tidak ada uang transport jika bekerja < 10 jam
}

int main() {
    string NIP, nama, Ulang;
    int jamKerja;

    // Input NIP, Nama, dan Jumlah Jam Kerja
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Menghitung gaji pokok, lembur, uang makan, dan transport
    int gajiPokok = pokok(jamKerja);
    int uangLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    // Output NIP, Nama, Gaji Pokok, Lembur, Uang Makan, Transport
    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Uang Lembur: Rp. " << uangLembur << endl;
    cout << "Uang Makan: Rp. " << uangMakan << endl;
    cout << "Uang Transport: Rp. " << uangTransport << endl;

    return 0;
}
