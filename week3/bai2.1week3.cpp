#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct QueueLinkedList {
    Node* head = NULL; 
    Node* tail = NULL; 

  
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;       
        }
    }

   
    void pop() {
        if (head == NULL) {
            cout << "Queue rong, khong the pop!\n";
            return;
        }
        Node* temp = head;
        head = head->next; 

        if (head == NULL) { 
            tail = NULL;
        }
        delete temp;
        cout << "Da xoa phan tu o dau Queue thanh cong!\n";
    }

    
    int front() {
        if (head == NULL) {
            cout << "Queue rong!\n";
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {
    QueueLinkedList q;
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
// Do phuc tap thoi gian: push O(1), pop O(1), front O(1), isEmpty O(1) | Do phuc tap bo nho: O(N)
