#include <iostream>
using namespace std;

// Fungsi untuk melakukan linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks elemen jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    // Memanggil fungsi linearSearch
    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Elemen " << target << " ditemukan pada indeks " << result << endl;
    } else {
        cout << "Elemen " << target << " tidak ditemukan dalam array" << endl;
    }

    return 0;
}
