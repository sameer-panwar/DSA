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

void deleteAtHead(node* &head){
    node* toDelete=head;

    head=head->next;
    delete toDelete;
}

void deletion(node* head, int val){

    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}

node* reverse(node* head){
    
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

    deletion(head, -1);
    display(head);
    return 0;
}