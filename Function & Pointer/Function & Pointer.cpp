#include <iostream>
using namespace std;

// Deklarasi fungsi dengan parameter dan nilai kembalian
int add(int a, int b) {
    return a + b;
}

// Deklarasi fungsi dengan parameter pointer
void multiplyByTwo(int* num) {
    *num *= 2;
}

int main() {
    // Memanggil fungsi dengan parameter dan nilai kembalian
    int result = add(3, 4);
    cout << "Hasil penjumlahan: " << result << endl;

    // Memanggil fungsi dengan parameter pointer
    int number = 5;
    multiplyByTwo(&number);
    cout << "Setelah dikalikan dua: " << number << endl;

    return 0;
}
