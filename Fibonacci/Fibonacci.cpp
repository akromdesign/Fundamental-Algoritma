#include <iostream>
using namespace std;

// Deklarasi fungsi untuk menghasilkan deret Fibonacci
void fibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Deret Fibonacci: ";

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }

        cout << next << " ";
    }

    cout << endl;
}

int main() {
    // Memanggil fungsi fibonacci dengan n=10
    fibonacci(10);

    return 0;
}
