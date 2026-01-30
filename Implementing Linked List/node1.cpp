#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int e){
        data = e;
        next = NULL;
    }
};


// class LinkedList{

//     private:
//         Node* head;
//         Node* tail;
//     public:
//         LinkedList(){
//             head = NULL;
//             tail = NULL;

//         }
//         void addFirst(int e){
//             Node* newest = new Node(e);
//             newest->next=head;
//             head=newest;
//             if (tail == NULL) tail=newest;
//         }
//         void addLast(int e){
//             Node* newest= new Node(e);
//             if (head==NULL) head = tail=newest;
//             else{
//                 tail->next=newest;
//                 tail=newest;
//             }
//         }
//         void removeFirst(){
//             if (head==NULL){
//                 cout<<"empty\n";
//                 return;
        
//             }
//             Node* temp=head;
//             head=head->next;
//             if (head == NULL) tail=NULL;
//             delete temp;

//         }
//         void printList(){
//             Node* curr=head;
//             while (curr!=NULL){
//                 cout<<curr-> data<<" ";
//                 curr=curr->next;
//             }
//             cout<<endl;
//         }
//         ~LinkedList(){
//             while (head!=NULL)
//             {
//                 removeFirst();
//             }
            
//         }


// };
class CircularLinkedList{
private:
    Node* start;
    Node* end;

public:
    CircularLinkedList(){
        start = end = NULL;
    }

    void addFirst(int e){
        Node* neww = new Node(e);

        if (start == NULL){
            start = end = neww;
            neww->next = start;
        }
        else{
            neww->next = start;
            start = neww;
            end->next = start;
        }
    }

    void addLast(int e){
        Node* neww = new Node(e);

        if (start == NULL){
            start = end = neww;
            neww->next = start;
        }
        else{
            neww->next = start;
            end->next = neww;
            end = neww;
        }
    }

    void removeFirst(){
        if (start == NULL){
            cout<<"empty\n";
            return;
        }

        if (start == end){
            delete start;
            start = end = NULL;
        }
        else{
            Node* temp = start;
            start = start->next;
            end->next = start;
            delete temp;
        }
    }

    void printList(){
        if(start == NULL) return;

        Node* curr = start;
        do{
            cout<<curr->data<<" ";
            curr = curr->next;
        }while (curr != start);

        cout<<endl;
    }

    int sumList(){
        if (start == NULL) return 0;

        int s = 0;
        Node *p = start;

        do{
            s += p->data;
            p = p->next;
        }while (p != start);

        return s;
    }

    ~CircularLinkedList(){
        while (start != NULL){
            removeFirst();
        }
    }
};
int main(){
    CircularLinkedList list;
    int x;
    // list.addFirst(20);
    // list.addFirst(30);
    // list.addFirst(40);
    // list.addLast(123);
    // list.addLast(456);
    // list.addLast(789);
    // list.printList();
    srand(time(NULL));
    do{
        cin>>x;
        if (x!=0){
            int r =rand() %2;
            if (r==0){
                list.addFirst(x);
                cout<<"addfirst\n "<<endl;
            }
            else {list.addLast(x);cout<<"add Last\n"<<endl;}
        }
    }while(x!=0);
    
    list.removeFirst();
    list.printList();
    list.sumList();
    return 0;
}