#include <iostream>

using namespace std;


void xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri k khong hop le!" << endl;
        return;
    }
   
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--; 
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

    int k;
    cout << "Nhap vi tri k can xoa: ";
    cin >> k;

    xoaPhanTu(a, n, k);

    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity: O(N)
// Memory  complexity: O(N)
