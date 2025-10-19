//Write a program to insert an element in an array by accepting the array from the user.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size array :\n";
    cin>>n;
    int a[n+1];
    cout<<"Enter the Array Elements :\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Array Elements :\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    int ele,ind;
    cout<<"Enter element to insert and its position:\n";
    cin>>ele>>ind;
    for(int i=n,j=i-1;i>=ind;i--,j--)
    {
        a[i]=a[j];
    }
    a[ind-1]=ele;
    cout<<"Array Elements\n";
    for(int i=0;i<=n;i++)
        cout<<a[i]<<endl;

    return 0;
}
