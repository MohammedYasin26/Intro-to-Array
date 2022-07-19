#include<iostream>
using namespace std;

int main()
{

    int a[5],i;
    for (i=0;i<4;i++)
    {
        cout<<endl<<"Enter a value :";
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        cout<<endl<<"Value of "<<a[i];
    }

    return 0;
}