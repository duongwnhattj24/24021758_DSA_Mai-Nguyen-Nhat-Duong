#include <iostream>

using namespace std;

// Ham sap xep tang dan kieu void
void sapXep(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Doi cho 2 phan tu
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }

    sapXep(a, n);

    cout << "Day so sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time complexity: O(N^2)
// Memory  complexity: O(N)
