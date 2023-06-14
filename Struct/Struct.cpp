#include <iostream>
#include <string>
using namespace std;

// Definisi struct
struct Mahasiswa {
    int nim;
    string nama;
    string jurusan;
    int angkatan;
};

int main() {
    // Deklarasi variabel bertipe struct Mahasiswa
    Mahasiswa mhs1;

    // Mengisi data ke variabel struct
    mhs1.nim = 123456;
    mhs1.nama = "John Doe";
    mhs1.jurusan = "Informatika";
    mhs1.angkatan = 2020;

    // Menampilkan data dari variabel struct
    cout << "NIM: " << mhs1.nim << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;
    cout << "Angkatan: " << mhs1.angkatan << endl;

    return 0;
}
