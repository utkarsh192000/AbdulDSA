#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int main(){

    // Simple struct
    struct Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    // in variable simply acess with .

    // stuct pointer
    struct Rectangle *p=&r;
    cout<<p->breadth<<endl;
    cout<<p->length<<endl;

    //  in pointer one can access the data member of struct with arrow function

    // CREATE A MEMORY IN HEAP AND ACCESS WITH IT POINTER
    struct Rectangle *po;
    // po=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    po=new struct Rectangle;   // this is another way to create the memory
    po->length=67;
    po->breadth=92;
    cout<<po->length<<endl;
    cout<<po->breadth<<endl;



    

    return 0;
}