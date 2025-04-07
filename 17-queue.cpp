    #include<iostream>
    #define n 100

    using namespace std;

    class queue{
        int* arr;
        int front;
        int back;
        public:
        queue(){
            arr=new int[n];
            front = -1;
            back = -1;
        }

        ~queue(){
            delete[] arr;
        }

        void enqueue(int val){
            if(back == n-1){
                cout<<"Queue Overflow\n"<<endl;
                return;
            }

            arr[++back]=val;

            if(front == -1){
                front++;
            }
        }

        void dequeue(){
            if(front == -1 || front > back){
                cout<<"Queue Underflow\n"<<endl;
                return;
            }

            front++;
        }

        int peek(){
            if(front == -1 || front > back){
                cout<<"Queue Underflow\n"<<endl;
                return -1;
            }

            return arr[front];
        }

        bool empty(){
            if(front == -1 || front > back){
                return true;
            }

            return false;
        }

        void display() {
            if (empty()) {
                cout << "Queue is empty\n";
                return;
            }
        
            cout << "Queue elements: ";
            for (int i = front; i <= back; i++) {
                cout << arr[i];
                if (i != back) cout << " -> ";
            }
            cout << endl;
        }
        
    };

    int main(){

        queue q;

        q.display();
        q.dequeue();

        q.enqueue(1);
        q.enqueue(2);

        q.display();

        cout<< "Peek:"<<q.peek()<<endl;

        q.enqueue(3);
        q.enqueue(4);

        q.dequeue();

        cout<<"Peek:"<<q.peek()<<endl;

        q.display();
        

        return 0;
    }