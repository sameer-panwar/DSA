

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;


    cout<<"Enter the elements of the array?"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0;
    int first_index=-1;
    int last_index=-1;

    for (int i = 0; i < n; i++){
        sum=0;
        for (int j = 0; j < n; j++){
            sum+=arr[j];
            if(sum == 12){
                last_index=j;
                first_index=i;
                break;
            }
        }
        if(sum== 12){
            break;
        }
    }
    if (first_index != -1 && last_index != -1) {
        cout << "First and last index are " << first_index << ", " << last_index << endl;
    } else {
        cout << "No subarray found with sum 12" << endl;
    }

}