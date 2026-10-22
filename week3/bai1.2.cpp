#include <iostream>
using namespace std;

#define MAX 1000 

struct StackList {
    int a[MAX];
    int topIndex = -1; 

    
    void push(int x) {
        if (topIndex >= MAX - 1) {
            cout << "Stack bi day!\n";
            return;
        }
        topIndex++;
        a[topIndex] = x;
    }

   
    void pop() {
        if (topIndex < 0) {
            cout << "Stack rong, khong the pop!\n";
            return;
        }
        topIndex--;
        cout << "Da xoa phan tu tren cung thanh cong!\n";
    }

   
    int top() {
        if (topIndex < 0) {
            cout << "Stack rong!\n";
            return -1;
        }
        return a[topIndex];
    }

    bool isEmpty() {
        return topIndex < 0;
    }
};

int main() {
    StackList st;
    int luaChon, giaTri;

    while (true) {
       
        cout << "1. Push (Them phan tu)\n";
        cout << "2. Pop (Xoa phan tu tren cung)\n";
        cout << "3. Top (Xem phan tu tren cung)\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        if (luaChon == 1) {
            cout << "Nhap gia tri nguyen can them: ";
            cin >> giaTri;
            st.push(giaTri);
            cout << "Da them " << giaTri << " vao Stack!\n";
        } else if (luaChon == 2) {
            st.pop();
        } else if (luaChon == 3) {
            int topVal = st.top();
            if (topVal != -1) {
                cout << "Gia tri o dinh Stack: " << topVal << endl;
            }
        } else if (luaChon == 0) {
            break;
        } else {
            cout << "Lua chon khong hop le!\n";
        }
    }

    return 0;
}
// Do phuc tap thoi gian: push O(1), pop O(1), top O(1), isEmpty O(1) | Do phuc tap bo nho: O(MAX)
