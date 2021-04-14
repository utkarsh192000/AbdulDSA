#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int a = 10;
    int *p; // declaration of pointer
    p = &a; // deferencing , storing the address of a in p
    int b[] = {2, 4, 6, 8, 10};
    int *po;
    po = b; // no need to give address in case of array because its adress is already set





    //  TO CREATE HEAP MEMORY OUSIDE THE STACK
    int *ph;
    // ph=(int*)malloc(5*sizeof(int));   method to make heap memory in C
    ph=new int[5];
    ph[0]=19;
    ph[1]=16;





    cout << a << endl;
    // printf("%d",a);
    // printf("%d",p);
    // printf("%d",*p);
    cout << p << endl;
    cout << *p << endl; // value of the variable where p is pointing

    int i;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << endl;
        cout << po[i] << endl;   // in case of array it is same as arr
    }



    // HEAP TESTING
    cout<<ph[0]<<endl;
    cout<<ph[1]<<endl;


    return 0;
}