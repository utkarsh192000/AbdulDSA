#include<bits/stdc++.h>
using namespace std;


class Node{
    private:

    public:
    int data;
    Node *next;

};

class LinkedList{
    private:
    Node *first;

    public:
    LinkedList(){first=NULL;}   // intialization of LinkedList Constructor
    LinkedList(int a[],int n);
    ~LinkedList();     // Destructor


    void Display();
    void Insert(int index,int x);
    int Delete();
    int Length();
    

};








int main(){

    

    return 0;
}