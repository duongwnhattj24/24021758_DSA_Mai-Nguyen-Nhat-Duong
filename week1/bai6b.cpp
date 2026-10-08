#include <iostream>

using namespace std;


void chenPhanTu(int a[], int &n, int y, int m) {
    if (m < 0 || m > n) {
        cout << "Vi tri m khong hop le!" << endl;
        return;
    }
    
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y; 
    n++; 
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }

    int y, m;
    cout << "Nhap gia tri y can chen: ";
    cin >> y;
    cout << "Nhap vi tri m can chen: ";
    cin >> m;

    chenPhanTu(a, n, y, m);

    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity: O(N)
// Memory  complexity: O(N)
