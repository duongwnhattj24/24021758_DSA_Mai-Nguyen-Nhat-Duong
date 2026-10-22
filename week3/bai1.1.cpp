#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


struct StackLinkedList {
    Node* top = NULL; 

   
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top; 
        top = newNode;      
    }

   
    void pop() {
        if (top == NULL) {
            cout << "Stack bi rong, khong the pop!\n";
            return;
        }
        Node* temp = top;   
        top = top->next;   
        delete temp;        
    }

   
    int peek() {
        if (top == NULL) {
            cout << "Stack rong!\n";
            return -1;
        }
        return top->data;
    }

   
    bool isEmpty() {
        return top == NULL;
    }
};



int main() {
    StackLinkedList st;
    int luaChon;
    int giaTri;

    while (true) {
       
        cout << "1. Push (Them 1 so vao Stack)\n";
        cout << "2. Pop (Xoa phan tu tren cung)\n";
        cout << "3. Peek (Xem phan tu tren cung)\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "Chon thao tac (0-3): ";
        cin >> luaChon;

        if (luaChon == 1) {
            cout << "Nhap so nguyen can them: ";
            cin >> giaTri;
            st.push(giaTri);
            cout << "Da them " << giaTri << " vao Stack!\n";
        } 
        else if (luaChon == 2) {
            st.pop();
        } 
        else if (luaChon == 3) {
            int topVal = st.peek();
            if (topVal != -1) {
                cout << "Gia tri o dinh Stack la: " << topVal << endl;
            }
        } 
        else if (luaChon == 0) {
            cout << "Da thoat chuong trinh.\n";
            break; 
        } 
        else {
            cout << "Lua chon khong hop le, vui long chon lai!\n";
        }
    }

    return 0;
}
// Do phuc tap thoi gian: push O(1), pop O(1), peek O(1), isEmpty O(1) | Do phuc tap bo nho: O(N)
