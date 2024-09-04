#include<iostream>
using namespace std;

int main(){
    
    cout<<"Enter the length of the String"<<endl;
    int n;
    cin>>n;
    cin.ignore();

    cout<<"Enter the String"<<endl;
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();


    int i=0;
    int current=0, largest=0;
    while(1){

        if(arr[i] == ' ' && arr[i] == '\0'){
            if(current>largest){
                largest=current;
            }
            current=0;
        }
        current++;
         if(i == '\0'){
            break;
        }

    }

    cout<<largest<<endl;
    return 0;
}