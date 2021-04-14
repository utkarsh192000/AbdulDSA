#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
}

void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << "->";
        RDisplay(p->next);
    }
}

void RReverseDisplay(struct Node *p)
{
    if (p != NULL)
    {

        RReverseDisplay(p->next);
        cout << p->data << "-> ";
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}

int add(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

struct Node *Lsearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        else
        {
            p = p->next;
        }
    }
    return NULL;
}

struct Node *RSearch(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    return RSearch(p->next, key);
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(first))
    {
        return -1;
    }

    else if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int main()
{
    struct Node *temp;

    int a[] = {10, 20, 30, 40, 50};

    create(a, 5);
    // RDisplay(first);
    // RReverseDisplay(first);
    // cout << endl;
    // cout << "The length of LL is " << count(first);
    // cout << endl;
    // cout << "The sum of all data of LL is " << add(first);
    // temp = RSearch(first, 27);
    // if (temp)
    // {
    //     cout << "Key is Found" << endl;
    // }
    // else
    // {
    //     cout << "Key is not Found" << endl;
    // }
    // Display(first);
    // cout<<endl;
    // insert(first,0,67);
    // Display(first);
    // insert(first,4,10);
    // insert(first,5,20);
    // insert(first,6,30);
    // cout<<endl;
    Display(first);
    cout << endl;
    Delete(first, 4);
    cout << endl;
    Display(first);
    return 0;
}
