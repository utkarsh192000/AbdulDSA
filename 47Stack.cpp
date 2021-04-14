#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout << "Enter the Size ";
    cin >> st->size;
    st->top = -1;
    st->S =(int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st)
{
    int i,top;
    for (i = top; i >= 0; i--)
    {
        cout << st.S[i];
    }
    cout << endl;
}


void push(struct Stack *st,int x){
    if(st->top==st->size-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct Stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack Error";
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
    return x;
}


int main()
{
    struct Stack st;

    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    Display(st);
    return 0;
}