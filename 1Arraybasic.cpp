#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[5];
    int b[10] = {1, 2, 3, 4, 5};
    int c[] = {10, 20, 30, 40, 50};
    int d[] = {11, 22, 33, 44, 55};
    int i,x;

    cout << sizeof(b) << endl; // ech integer takes 4 bytes
    cout << b[2] << endl;
    cout << b[8] << endl;
    cout << b[9] << endl;
    printf("%d\n\n", b[4]);

    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", b[i]);
        cout << c[i] <<endl;
    }


    for (int x:d)
    {
        // printf("%d\n", b[i]);
        cout<<d<<endl;
    }


    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int e[n];
    e[0]=2;
    cout<<e[0]<<endl;
    cout<<e[1]<<endl;
    cout<<e[2]<<endl;
    cout<<e[3]<<endl;


    return 0;
}