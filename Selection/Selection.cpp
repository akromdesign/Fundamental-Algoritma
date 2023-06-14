#include <iostream>
using namespace std;

int main() {
    // Input
    int number;
    cout << "Masukkan sebuah angka: ";
    cin >> number;

    // Seleksi menggunakan if-else
    if (number > 0) {
        cout << "Angka yang dimasukkan positif" << endl;
    } else if (number < 0) {
        cout << "Angka yang dimasukkan negatif" << endl;
    } else {
        cout << "Angka yang dimasukkan adalah nol" << endl;
    }

    return 0;
}
