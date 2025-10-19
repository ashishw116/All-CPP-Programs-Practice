//Write a program to split a given array in the mid. And sort one array in Ascending order and another in descending order.
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
    int size_asc=n/2,size_dsc=n-size_asc,asc[size_asc],dsc[size_dsc],ind=0;
    for(int i=0;i<n;i++)
    {
        if(i<size_asc)
            asc[i]=a[i];
        else
            dsc[ind++]=a[i];
    }
    cout<<"Ascending Array Elements :\n";
    for(int i=0;i<size_asc;i++)
        cout<<asc[i]<<endl;
    cout<<"Descending Array Elements :\n";
    for(int i=0;i<size_dsc;i++)
        cout<<dsc[i]<<endl;
    for(int i=0;i<size_asc-1;i++)
    {
            for(int j=i+1;j<size_asc;j++)
            {
                if(asc[i]>asc[j])
                {
                    int t=asc[i];
                    asc[i]=asc[j];
                    asc[j]=t;
                }
            }
    }
    for(int i=0;i<size_dsc-1;i++)
    {
            for(int j=i+1;j<size_dsc;j++)
            {
                if(dsc[i]<dsc[j])
                {
                    int t=dsc[i];
                    dsc[i]=dsc[j];
                    dsc[j]=t;
                }
            }
    }
    cout<<"Ascending Array Elements :\n";
    for(int i=0;i<size_asc;i++)
        cout<<asc[i]<<endl;
    cout<<"Descending Array Elements :\n";
    for(int i=0;i<size_dsc;i++)
        cout<<dsc[i]<<endl;
    return 0;
}
