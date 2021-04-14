#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[], int n)
{
    struct Node *t, *last;
    int i;
    first = new Node;
    first->data = a[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{

    while (p != NULL)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << endl;
}

int Length(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 1 || index > Length(first))
    {
        return;
    }
    if (index == 1)
    {
        t = new Node;
        t->data;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        t->prev = p;
        if (p->next != NULL)
        {
            p->next->prev = t;
        }
        p->next = t;
    }
}


int Delete(struct Node *p,int index){
    struct Node *q;
    int x=-1,i;
    if(index<1 | index>Length(first)){
        return -1;
    }
    if(index==1){
        first=first->next;
        if(first){
            first->prev=NULL;
        }
        x=p->data;
        delete p;
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next){
            p->next->prev=p->prev;   
        }
        x=p->data;
        delete p;
    }

    return x;


}


void Reverse(struct Node *p){
    struct Node *temp;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL){
            first=p;
        }

    }
}


int main()
{

    int a[] = {10, 20, 30, 40, 50};
    create(a, 5);
    Display(first);
    cout << endl;
    cout << Length(first) << endl;
    Insert(first,2,56);
    // Insert(first,1,34);
    Display(first);
    cout<<endl;
    Delete(first,5);
    Display(first);

    return 0;
}