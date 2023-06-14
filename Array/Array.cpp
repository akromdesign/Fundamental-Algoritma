#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array
    int numbers[5] = {2, 4, 6, 8, 10};

    // Mengakses elemen array
    cout << "Elemen array pada indeks ke-0: " << numbers[0] << endl;
    cout << "Elemen array pada indeks ke-2: " << numbers[2] << endl;

    // Mengubah nilai elemen array
    numbers[3] = 12;
    cout << "Setelah diubah, elemen array pada indeks ke-3: " << numbers[3] << endl;

    // Menampilkan semua elemen array menggunakan perulangan
    cout << "Semua elemen array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
