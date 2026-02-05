#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class MyQueue {
private:
    Node *head, *tail;

public:
    MyQueue() : head(nullptr), tail(nullptr) {}

    // 1. boolean isEmpty()
    bool isEmpty() {
        return head == nullptr;
    }

    // 2. void clear() - Xóa sạch queue
    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // 3. void enqueue(int x)
    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // 4. int dequeue() - Lấy và xóa phần tử đầu, ném Exception nếu rỗng
    int dequeue() {
        if (isEmpty()) throw runtime_error("Exception: Queue is empty!");
        Node* temp = head;
        int val = temp->data;
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete temp;
        return val;
    }

    // 5. int first() - Trả về phần tử đầu, không xóa
    int first() {
        if (isEmpty()) throw runtime_error("Exception: Queue is empty!");
        return head->data;
    }

    // 6. void traverse() - In toàn bộ phần tử trong queue
    void traverse() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    // Destructor
    ~MyQueue() {
        clear();
    }
};

// 7. Chuyển đổi nhị phân (Sử dụng Queue và Đệ quy để đảo ngược)
void processBinary(MyQueue &q) {
    if (q.isEmpty()) return;
    
    int bit = q.dequeue(); 
    processBinary(q);      
    cout << bit;           
}

void decimalToBinary(int n) {
    if (n == 0) {
        cout << "Binary: 0" << endl;
        return;
    }
    MyQueue q;
    int temp = n;
    while (temp > 0) {
        q.enqueue(temp % 2);
        temp /= 2;
    }
    cout << "So " << n << " sang nhi phan la: ";
    processBinary(q);
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong N: ";
    cin >> n;
    
    try {
        decimalToBinary(n);
        
        // Ví dụ test thêm các hàm khác
        MyQueue testQ;
        testQ.enqueue(10);
        testQ.enqueue(20);
        cout << "Traverse test: ";
        testQ.traverse(); // In ra: 10 20
        
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }
    
    return 0;
}