#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node*
     prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertionAtStart(node* &head, int val){
    node* n=new node(val);
    head->prev=n;
    n->next=head;
    head=n;
}

void insertionAtLast(node* &head, int val){
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
    n->prev=temp;
}
void deleteAtHead(node* &head){
    node* temp=head;
    head->next->prev=NULL;
    head=head->next;
    delete temp;
}

void deleteNode(node* &head, int key){

    if(head==NULL){
        return;
    }

    if(key==1){
        deleteAtHead(head);
        return;
    }

    node* temp=head;

    while(temp->data!=key){
        temp=temp->next;
    }

    if(temp->next==NULL){
        temp->prev->next=NULL;
        
        delete temp;
        return;
    }

    
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}

void display(node* head){
    node* temp=head;
    cout<<"NULL->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){

    node* head=NULL;
    insertionAtLast(head, 3);
    insertionAtLast(head, 4);
    display(head);
    insertionAtStart(head, 2);
    insertionAtStart(head, 1);
    display(head);    
    deleteNode(head, 1);
    display(head);
    return 0;
}