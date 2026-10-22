#include <iostream>
using namespace std;

#define MAX 1000

struct QueueList {
    int a[MAX];
    int headIndex = 0; 
    int tailIndex = 0; 

  
    void push(int x) {
        if (tailIndex >= MAX) {
            cout << "Queue bi day!\n";
            return;
        }
        a[tailIndex] = x;
        tailIndex++;
    }

   
    void pop() {
        if (headIndex == tailIndex) {
            cout << "Queue rong, khong the pop!\n";
            return;
        }
        headIndex++; 
        cout << "Da xoa phan tu dau Queue thanh cong!\n";
    }

    
    int front() {
        if (headIndex == tailIndex) {
            cout << "Queue rong!\n";
            return -1;
        }
        return a[headIndex];
    }

    bool isEmpty() {
        return headIndex == tailIndex;
    }
};

int main() {
    QueueList q;
    int luaChon, giaTri;

    while (true) {
       
        cout << "1. Push (Them vao cuoi hang)\n";
        cout << "2. Pop (Xoa o dau hang)\n";
        cout << "3. Front (Xem phan tu dau hang)\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        if (luaChon == 1) {
            cout << "Nhap gia tri nguyen can them: ";
            cin >> giaTri;
            q.push(giaTri);
            cout << "Da them " << giaTri << " vao Queue!\n";
        } else if (luaChon == 2) {
            q.pop();
        } else if (luaChon == 3) {
            int frontVal = q.front();
            if (frontVal != -1) {
                cout << "Gia tri dau Queue: " << frontVal << endl;
            }
        } else if (luaChon == 0) {
            break;
        } else {
            cout << "Lua chon khong hop le!\n";
        }
    }

    return 0;
}
// Do phuc tap thoi gian: push O(1), pop O(1), front O(1), isEmpty O(1) | Do phuc tap bo nho: O(MAX)
