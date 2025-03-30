#include<iostream>
using namespace std;
#define n 100


class stack{
    
    int* arr;
    int top;

    public:
    stack(){
        arr=new int [n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow\n";
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    stack stack;
    int choice;
    while(true){
        cout<<"1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Push operation\n";
                int x;
                cout<<"Enter element to push: ";
                cin>>x;
                stack.push(x);
                cout<<"Element pushed: "<<x<<endl;
                break;
            case 2:
                cout<<"Pop operation\n";
                stack.pop();
                cout<<"Element popped\n";
                break;
            case 3:
                cout<<"Peek element\n";
                int topElement;
                topElement = stack.peek();
                if(topElement != -1)
                    cout<<"Top element: "<<topElement<<endl;
                break;
            case 4:
                cout<<"Display operation\n";
                cout<<"Stack elements: ";
                stack.display();
                break;
            case 5:
                cout<<"Exiting...\n";
                return 0;
            default:
                cout<<"Invalid choice, please try again.\n";
        }
    }
}