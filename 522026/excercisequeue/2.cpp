#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
class MyQueue {
private:Node *head, *tail;
public:
    MyQueue() : head(nullptr), tail(nullptr) {}
    bool isEmpty() {return head == nullptr;}
    void clear() {
        while (!isEmpty()) {dequeue();}
    }
    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int dequeue() {
        if (isEmpty()) throw runtime_error("empty");
        Node* temp = head;
        int val = temp->data;
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete temp;
        return val;
    }
    int first() {
        if (isEmpty()) throw runtime_error("empty");
        return head->data;
    }
    void traverse() {
        if (isEmpty()) {
            cout << "empty" << endl;
            return;
        }
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    ~MyQueue() {clear();}
};
void printBinary(MyQueue &q) {
    if (q.isEmpty()) return;
    
    int bit = q.dequeue(); 
    printBinary(q);      
    cout << bit;           
}

void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0" << endl;
        return;
    }
    MyQueue q;
    int temp = n;
    while (temp > 0) {
        q.enqueue(temp % 2);
        temp /= 2;
    }
    cout << "So " << n << " sang nhi phan la: ";
    printBinary(q);
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong N: ";
    cin >> n;

    if (n < 0) {
        cout << "nhap so duong k phai so am" << endl;
    } else {
        decimalToBinary(n);
    }

    return 0;
}
