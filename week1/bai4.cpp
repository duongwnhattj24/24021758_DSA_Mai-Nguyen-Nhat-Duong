#include <iostream>

using namespace std;

void rutGon(int a, int b) {
    int x = a;
    int y = b;
    
   
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    int ucln = x;

    cout << "Phan so sau khi rut gon: " << a / ucln << "/" << b / ucln << endl;
}

int main() {
    int a, b;
    cout << "Nhap tu so a: ";
    cin >> a;
    cout << "Nhap mau so b: ";
    cin >> b;

    if (b == 0) {
        cout << "Mau so phai khac 0!" << endl;
    } else {
        rutGon(a, b);
    }

    return 0;
}

// Time complexity: O(log(min(a, b)))
// Memory complexity: O(1)
