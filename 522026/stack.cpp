// Practice exercise: Write a C++ program to implement a stack of integer values 
// with the following operations:
// 1. boolean isEmpty() – return true if Stack is empty, false otherwise.
// 2. void clear() – clear the Stack.
// 3. void push(int x) – insert the value x into the Stack.
// 4. int pop() – remove and return the top element on the Stack; through
// EmptyStackException if Stack is empty.
// 5. int top() – return the value at top of the Stack, but not removing it; through
// EmptyStackException if the Stack is empty.
// 6. void traverse() – loop through the Stack and print it out.
// 7. Using Stack to convert a decimal number into binary number and print it 
// out.
// Note: You can write some constructors and other methods if you find them 
// necessary



#include<bits/stdc++.h>
using namespace std;


class EmptyStackExecption:public runtime_error{
    public:
        EmptyStackExecption():runtime_error("Stack is empty") {}
};
struct Node{
    int data;
    Node* next;
    Node(int val):data(val), next(nullptr){}
};
class Stack{
    private:
        Node* head;
    public:
        Stack():head(nullptr){}
        ~Stack(){
            clear();
        }
        bool isEmpty(){
            return head==nullptr;
        }
        void clear(){
            while(head!=nullptr){
                Node* temp=head;
                head=head->next;
                delete temp;
            }
        }
        void push(int x){
            Node* newNode=new Node(x);
            newNode->next=head;
            head=newNode;
        }
        int pop(){
            if(isEmpty())throw EmptyStackExecption();
            Node* temp=head;
            int val=temp->data;
            head=head->next;
            delete temp;
            return val;

        }
        int top(){
            if (isEmpty()) throw EmptyStackExecption();
            return head->data;
        }
        void traverse(){
            Node* curr = head;
            while(curr!=nullptr){
                cout<<curr->data<<" ";
                curr=curr->next;
            }
            cout<<endl;
        }

};
void decimalToBinary(int decimal){
    cout<<endl;
    if(decimal==0){
        cout<<"0"<<endl;
        return;

    }
    Stack s;
    int temp=decimal;
    while(temp>0){
        s.push(temp%2);
        temp/=2;
    }
    cout<<decimal;
    while(!s.isEmpty()){
        cout<<" "<<s.pop();
    }

}
int main(){
    try{
        decimalToBinary(125);
        Stack s;
        s.traverse();
    }
    catch(const EmptyStackExecption& e){
        cerr<<e.what()<<endl;
    }
    return 0;
}
