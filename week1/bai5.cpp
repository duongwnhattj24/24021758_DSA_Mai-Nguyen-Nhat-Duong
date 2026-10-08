#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    double a[1000];
    double tong = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
        tong = tong + a[i];
    }

    double trungBinh = tong / n;
    cout << "Gia tri trung binh: " << trungBinh << endl;

    cout << "Cac phan tu lon hon hoac bang trung binh: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= trungBinh) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

// Time complexity: O(N)
// Memory complexity: O(N)
