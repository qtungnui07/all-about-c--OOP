#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data = x;
        prev = next = NULL;
    }
};

class DoublyLinkedList{
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList(){
        head = tail = NULL;
    }

    // ===== Add First =====
    void addFirst(int x){
        Node* newNode = new Node(x);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // ===== Add Last =====
    void addLast(int x){
        Node* newNode = new Node(x);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // ===== Remove First =====
    void removeFirst(){
        if(head == NULL){
            cout<<"Empty\n";
            return;
        }

        Node* temp = head;

        if(head == tail){
            head = tail = NULL;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    // ===== Remove Last =====
    void removeLast(){
        if(tail == NULL){
            cout<<"Empty\n";
            return;
        }

        Node* temp = tail;

        if(head == tail){
            head = tail = NULL;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
    }
    void printForward(){
        Node* curr = head;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }

    void printBackward(){
        Node* curr = tail;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->prev;
        }
        cout<<endl;
    }

    ~DoublyLinkedList(){
        while(head != NULL){
            removeFirst();
        }
    }
};

int main(){
    DoublyLinkedList list;
    list.addFirst(10);
    list.addFirst(20);
    list.addLast(30);
    list.addLast(40);
    list.printForward();
    list.printBackward();
    list.removeFirst();
    list.removeLast();
    list.printForward();
}
