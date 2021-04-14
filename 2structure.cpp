#include<bits/stdc++.h>
using namespace std;

  struct Rectangle{
        int length;    // it takes 4 bytes
        int breadth;
        char x;   // although it takes 2 bytes only but here it is easier for system to assign 4 bytes, padding(extra memory)

    };



int main(){
    struct Rectangle r;
    struct Rectangle r1={7,6};
    r.breadth=10;
    r.length=5;
    cout<<r.length*r.breadth<<endl;
    cout<<r1.length*r1.breadth<<endl;
    cout<<sizeof(r1)<<endl;

  
    return 0;
}
