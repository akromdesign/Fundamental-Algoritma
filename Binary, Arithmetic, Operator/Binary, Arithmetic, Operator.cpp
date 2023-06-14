#include <iostream>
using namespace std;

int main() {
    // Operator Biner (Binary Operator)
    int a = 5; // nilai a = 5
    int b = 3; // nilai b = 3

    // Operator Aritmatika
    int sum = a + b; // Penjumlahan: 5 + 3 = 8
    int difference = a - b; // Pengurangan: 5 - 3 = 2
    int product = a * b; // Perkalian: 5 * 3 = 15
    int division = a / b; // Pembagian: 5 / 3 = 1 (karena hasil pembagian bilangan bulat)
    int modulus = a % b; // Modulus: 5 % 3 = 2 (sisa pembagian)

    // Menampilkan hasil
    cout << "Penjumlahan: " << sum << endl;
    cout << "Pengurangan: " << difference << endl;
    cout << "Perkalian: " << product << endl;
    cout << "Pembagian: " << division << endl;
    cout << "Modulus: " << modulus << endl;

    return 0;
}
