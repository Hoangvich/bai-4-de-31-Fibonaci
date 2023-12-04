#include <iostream>

using namespace std;

void printFibonacci(int n) {
    int f0 = 1, f1 = 1;
   cout << "Cac so hang dau tien trong day Fibonacci la: ";

    if (n >= 1) {
        cout << f0 << " ";
    }
    if (n >= 2) {
        cout << f1 << " ";
    }

    for (int i = 2; i < n; i++) {
        int current = f0 + f1;
        cout << current << " ";
        f0 = f1;
        f1 = current;
    }
}

int main() {
    int n;
    cout << "Nhap vao so n (n > 0): ";
    cin >> n;

    if (n <= 0) {
        cout << "Gia tri cua n khong hop le!" << endl;
        return 1;
    }

    printFibonacci(n);

    return 0;
}
