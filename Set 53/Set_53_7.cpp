//Write a program to inherit the classes called Two, Three, N_nos in multiple inheritance mode. Each of the classes are having a member function named findBiggest() with same signature. and find the biggest Number through virtual functions.
#include<iostream>
using namespace std;
class Two
{
public:
    virtual void findBiggest()
    {
        int a,b;
        cout<<"Enter 2 numbers : ";
        cin>>a>>b;
        cout<<"Greatest :"<<((a>b)?a:b);
    }
};
class Three : public Two
{
public:
    void findBiggest()
    {
        int a,b,c;
        cout<<"Enter 3 numbers : ";
        cin>>a>>b>>c;
        cout<<"Greatest :"<<((a>b)&&(a>c)?a:(b>c)?b:c);
    }
};
class N_nos : public Three
{
public:
    void findBiggest()
    {
        int n;
        cout<<"Enter Size of numbers : "<<endl;
        cin>>n;
        cout<<"Enter Elements : "<<endl;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int big=arr[0];
        for(int i=1;i<n;i++)
        {
            big=big<arr[i]?arr[i]:big;
        }
        cout<<"Greatest :"<<big;
    }
};
int main()
{
    Two *ptr;
    Two obj1;
    ptr=&obj1;
    ptr->findBiggest();

    Three obj2;
    ptr=&obj2;
    ptr->findBiggest();

    N_nos obj3;
    ptr=&obj3;
    ptr->findBiggest();
    return 0;
}
