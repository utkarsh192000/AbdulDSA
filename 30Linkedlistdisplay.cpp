#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


void create(int a[],int n){
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for (int i=1;i<n;i++){
        t=new Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}


void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }

}


int main(){

    int a[]={3,5,7,10,15};
    
    create(a,5);
    Display(first);

    return 0;
}