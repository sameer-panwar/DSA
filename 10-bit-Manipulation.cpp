//Get Bit is to check what bit is in the given position p i.e 0 or 1.

//Set Bit is used to make a pos 1.

//Clear Bit is used to clear a pos / to make a pos 0.

//update bit is used to update a position with either 0 or 1.


#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos)!=0);
}

int setBit(int n, int pos){
    return n | (1<<pos);
}

int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return n & mask;
}

int updateBit(int n, int pos, int value){
    int mask=~(1<<pos);
    n=n & mask;
    return n | (value<<pos);
}





int main(){
    int n=10;      //1010
    int m=5;      //0101
    cout<<getBit(n, 2)<<endl;
    cout<<getBit(m, 2)<<endl;

    cout<<setBit(n, 2)<<endl;
    cout<<setBit(m, 2)<<endl;

    cout<<clearBit(n, 2)<<endl;
    cout<<clearBit(m, 2)<<endl;

    cout<<updateBit(n, 2, 1)<<endl;
    cout<<updateBit(m, 2, 0)<<endl;
    return 0;
}