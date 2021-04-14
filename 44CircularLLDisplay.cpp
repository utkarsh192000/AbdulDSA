#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    struct Node *next;

}*Head;


void create(int a[],int n){
    int i;
    struct Node *t,*last;
    Head=new Node;
    Head->data=a[0];
    Head->next=Head;   // this has created a node 
    last=Head;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }

}

void Display(struct Node *h){
    do{
        cout<<h->data<<"->";
        h=h->next;
    }while(h!=Head);
    cout<<endl;

}

void RDisplay(struct Node *h){
    static int flag=0;
    if(h!=Head || flag==0){
        flag=1;
        cout<<h->data;
        RDisplay(h->next);
    }
    flag=0;

}

int main(){

    int a[]={1,2,3,4,5};
    create(a,5);
    Display(Head);

    

    return 0;
}