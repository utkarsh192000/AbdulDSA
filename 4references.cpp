#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=10;
    int &r=a;    // it must initialized instantly, and always r will be a , it cannot be given any value again r=b , is wrong it will set the value of a equl to b
    // &r=a;
    cout<<a<<endl;
    cout<<r<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;



    return 0;
}       