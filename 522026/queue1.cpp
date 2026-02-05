#include <iostream>
#include <stdexcept>

using namespace std;

// Lớp ngoại lệ khi Queue rỗng
class EmptyQueueException : public runtime_error {
public:
    EmptyQueueException() : runtime_error("Queue rỗng rồi bạn ơi!") {}
};

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* head; // Đầu hàng
    Node* tail; // Cuối hàng

public:
    Queue() : head(nullptr), tail(nullptr) {}

    ~Queue() { clear(); }

    bool isEmpty() {
        return head == nullptr;
    }

    // 1. Enqueue: Thêm vào cuối hàng
    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode; // Nối Node mới vào sau tail cũ
            tail = newNode;       // Cập nhật tail mới
        }
    }

    // 2. Dequeue: Lấy ra từ đầu hàng
    int dequeue() {
        if (isEmpty()) throw EmptyQueueException();
        
        Node* temp = head;
        int val = temp->data;
        head = head->next;
        
        if (head == nullptr) tail = nullptr; // Nếu hàng hết sạch phần tử
        
        delete temp;
        return val;
    }

    // 3. Front: Xem phần tử đầu hàng
    int front() {
        if (isEmpty()) throw EmptyQueueException();
        return head->data;
    }

    void clear() {
        while (!isEmpty()) dequeue();
    }

    void traverse() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " <- ";
            curr = curr->next;
        }
        cout << "END" << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Hàng đợi hiện tại: ";
    q.traverse(); // Kết quả: 10 <- 20 <- 30 <- END

    cout << "Lấy ra phần tử: " << q.dequeue() << endl; // Lấy ra 10
    cout << "Hàng đợi sau khi dequeue: ";
    q.traverse();

    return 0;
}