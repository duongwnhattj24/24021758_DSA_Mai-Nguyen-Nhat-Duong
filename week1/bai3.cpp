#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    long long giaithua = 1;

    for (int i = 1; i <= n; i++) {
        giaithua = giaithua * i;
    }

    cout << n << "! = " << giaithua << endl;

    return 0;
}

// Time complexity: O(N)
// Memory complexity: O(1)
