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

int main()
{

    int a[] = {3, 5, 7, 10, 15};

    create(a, 5);
    RDisplay(first);
    // RReverseDisplay(first);
    cout << endl;
    cout << "The length of LL is " << count(first);
    cout << endl;
    cout << "The sum of all data of LL is " << add(first);

    return 0;
}