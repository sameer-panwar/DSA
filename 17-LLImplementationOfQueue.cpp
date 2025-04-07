#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int val){
        node* n = new node(val);

        if(front == NULL){
            front =n;
            back= n;
            return;
        }

        back->next=n;
        back=n;
    }

    void dequeue(){
        if(front == NULL){
            cout<<"Queue is empty!\n";
            return;
        }

        node* todelete= front;
        front = front->next;

        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout<<"Queue is empty!\n";
            return -1;
        }

        return front->data;
    }

    bool empty(){
        return front == NULL;
    }

    void display(){
        if(front == NULL){
            cout<<"Queue is empty!\n";
            return;
        }

        node* temp = front;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    queue q;
    cout<<"peek:"<<q.peek()<<endl;
    q.enqueue(1);
    q.enqueue(2);
    cout<<"peek:"<<q.peek()<<endl;
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.empty()<<endl;;
    q.enqueue(5);
    q.dequeue();
    q.display();
}

