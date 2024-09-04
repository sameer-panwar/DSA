#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    /*char arr[n-1];
    cin>>arr;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<arr<<endl;
*/

    char arr[n+1];
    cin.getline(arr, n);

    cout<<arr<<endl;
    cin.ignore();




    return 0;
}