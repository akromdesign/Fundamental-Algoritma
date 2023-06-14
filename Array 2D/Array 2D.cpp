#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array 2D
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Mengakses elemen array 2D
    cout << "Elemen pada baris 1, kolom 2: " << matrix[1][2] << endl;
    cout << "Elemen pada baris 2, kolom 0: " << matrix[2][0] << endl;

    // Mengubah nilai elemen array 2D
    matrix[0][1] = 10;
    cout << "Setelah diubah, elemen pada baris 0, kolom 1: " << matrix[0][1] << endl;

    // Menampilkan semua elemen array 2D menggunakan perulangan
    cout << "Semua elemen array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
