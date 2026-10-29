#include <iostream>
#include <string>
using namespace std;

const int SIZE = 7; 


struct Node {
    int msv;         
    string ten;      
    Node* next;      
};


Node* hashTable[SIZE];


int hashFunction(int msv) {
    return msv % SIZE;
}


void init() {
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = NULL;
    }
}


void insert(int msv, string ten) {
    int index = hashFunction(msv); 

   
    Node* newNode = new Node;
    newNode->msv = msv;
    newNode->ten = ten;
    newNode->next = NULL;

   
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode; 
    } else {
        newNode->next = hashTable[index]; 
        hashTable[index] = newNode;
    }
}


void search(int msv) {
    int index = hashFunction(msv); 
    
    Node* temp = hashTable[index]; 
    while (temp != NULL) {
        if (temp->msv == msv) {
            cout << "=> Tim thay! MSV: " << msv << " - Ten: " << temp->ten << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "=> Khong co ai  ma so " << msv << " trong he thong!" << endl;
}

int main() {
    init(); 

    int luaChon;
    while (true) {
       
        cout << "1. Them sinh vien vao bang bam" << endl;
        cout << "2. Tim kiem sinh vien" << endl;
        cout << "3. Thoat chuong trinh" << endl;
        cout << "Nhap lua chon cua ban (1-3): ";
        cin >> luaChon;

        if (luaChon == 1) {
            int msv;
            string ten;
            
            cout << "Nhap ma sinh vien : ";
            cin >> msv;
            
            
            cin.ignore(); 
            
            cout << "Nhap ho ten sinh vien: ";
            getline(cin, ten); 
            
            insert(msv, ten);
            cout << "=> Da them vao bang bam thanh cong!" << endl;

        } else if (luaChon == 2) {
            int msv;
            cout << "Nhap ma sinh vien can tim: ";
            cin >> msv;
            search(msv);

        } else if (luaChon == 3) {
            cout << "=> Chuc ban qua mon! Thoat..." << endl;
            break; 

        } else {
            cout << "=> Lua chon khong hop le, nhap lai di bro!" << endl;
        }
    }

    return 0;
}
