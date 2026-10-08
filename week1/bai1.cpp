#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[1000];
    int tong = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        tong = tong + a[i];
    }

    cout << "Tong cac phan tu trong day la: " << tong << endl;

    return 0;
}

// Time complexity: O(N)
// memory  complexity: O(N)

 
