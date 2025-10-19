//Write a program assign an array and reverse it.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size array :\n";
    cin>>n;
    int a[n];
    cout<<"Enter the Array Elements :\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Array Elements :\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;

    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    cout<<"Array Elements in reverse:\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;

    return 0;
}
