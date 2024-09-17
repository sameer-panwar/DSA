#include<iostream>
#include<algorithm>


using namespace std;

string intergerToRoman(int num, int place){
    string units[]={"", "I", "II", "III", "Iv", "V", "VI", "VII", "VIII", "IX", "X"};
    string tens[]     = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string thousands[] = {"", "M", "MM", "MMM"};

    if(place == 1) return units[num];
    if(place == 2) return tens[num];
    if(place == 3) return hundreds[num];
    if(place == 4) return thousands[num]; 
    return "";
}


int main(){

    int num=3489;
    int place=1;
    string inRoman="";
    while(num>0){
        int r=num%10;
        inRoman=intergerToRoman(r, place) + inRoman;
        num/=10;
        place++;
    }

    cout<<inRoman<<endl;
    return 0;
}


