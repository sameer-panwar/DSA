//Insertion at tail, Insertion at Tail, Searching

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

void insertAtTail(node* &head, int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

int search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    display(head);
    cout<<endl;
    insertAtHead(head, 0);
    insertAtHead(head, -1);
    display(head);
    cout<<endl;
    cout<<search(head, 2)<<endl;
    cout<<search(head, 5)<<endl;
    cout<<search(head, -1)<<endl;
    return 0;
}