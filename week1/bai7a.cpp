#include <iostream>

using namespace std;


int tinhTong(int a[][100], int n, int m) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tong = tong + a[i][j];
        }
    }
    return tong;
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

    int tong = tinhTong(a, n, m);
    cout << "Tong cac phan tu trong mang 2 chieu la: " << tong << endl;

    return 0;
}

// Time complexity: O(N * M)
// Memory  complexity: O(N * M)
