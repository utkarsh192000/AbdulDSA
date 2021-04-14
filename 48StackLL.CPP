#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(struct Node *top,int x)
{
    struct Node *t;
    // t = new Node;
    t=(struct Node*)malloc(sizeof(struct Node));

    if (t = NULL)
    {
        cout << "Stack OverFlow" << endl;
    }
    t->data = x;
    t->next = top;
    top = t;
}

int pop(struct Node *top)
{
    struct Node *t;
    int x = -1;

    if (top == NULL)
    {
        cout << "Stack is Empty";
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Display(struct Node *top){

    struct Node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}


int main()
{
    push(top,10);
    push(top,20);
    push(top,30);
    push(top,40);
    Display(top);
    cout<<"The popped out Element is "<<pop(top)<<endl;

    return 0;
}