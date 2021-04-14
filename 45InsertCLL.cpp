#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

} * Head;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    Head = new Node;
    Head->data = a[0];
    Head->next = Head; // this has created a node
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *h)
{
    do
    {
        cout << h->data << "->";
        h = h->next;
    } while (h != Head);
    cout << endl;
}

void RDisplay(struct Node *h)
{
    static int flag = 0;
    if (h != Head || flag == 0)
    {
        flag = 1;
        cout << h->data;
        RDisplay(h->next);
    }
    flag = 0;
}

int Length(struct Node *p)
{
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > Length(Head))
    {
        return;
    }
    if (index == 0)
    {
        t = new Node;
        t->data = x;

        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
                p = p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
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
        p->next = t;
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q;
    int i,x;
    if (index < 0 || index > Length(Head))
    {
        return -1;
    }
    if (index == 1)
    {
        while (p->next != Head)
        {
            p=p->next;
        }
        x=Head->data;
        if(Head==p){
            delete Head;
            Head=NULL;
        }
        else{
            p->next=Head->next;
            delete Head;
            Head=p->next;
        }
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        delete q;
    }
    return x;
}
int main()
{

    int a[] = {1, 2, 3, 4, 5};
    create(a, 5);
    Display(Head);
    cout << endl;
    insert(Head, 2, 10);
    Display(Head);
    Delete(Head,4);
    Display(Head);

    return 0;
}