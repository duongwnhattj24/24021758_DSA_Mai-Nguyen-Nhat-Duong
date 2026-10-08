#include <iostream>

using namespace std;


void xoaDong(int a[][100], int &n, int m, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri dong khong hop le!" << endl;
        return;
    }
    
    for (int i = k; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i + 1][j];
        }
    }
    n--; 
}


void inMang(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Nhap so dong N: ";
    cin >> n;
    cout << "Nhap so cot M: ";
    cin >> m;

    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int k;
    cout << "Nhap vi tri dong k can xoa: ";
    cin >> k;

    xoaDong(a, n, m, k);

    cout << "Mang 2 chieu sau khi xoa dong " << k << ":\n";
    inMang(a, n, m);

    return 0;
}

// Time complexity: O(N * M)
// Memory  complexity: O(N * M)
