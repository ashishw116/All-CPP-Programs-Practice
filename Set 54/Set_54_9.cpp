//Write a program to inherit five classes in Multi-Level manner into a 6th class called Array. Each super class are having One protected data member and one protected member function. In class called Array form an array and sort the Even array elements into ascending order and print the resulted array.
#include<iostream>
using namespace std;
class One
{
protected:
    int a;
    void setA()
    {
        cout<<"Enter N1 : ";
        cin>>a;
    }
};
class Two : public One
{
protected:
    int b;
    void setB()
    {
        cout<<"Enter N2 : ";
        cin>>b;
    }
};
class Three : public Two
{
protected:
    int c;
    void setC()
    {
        cout<<"Enter N3 : ";
        cin>>c;
    }
};
class Four : public Three
{
protected:
    int d;
    void setD()
    {
        cout<<"Enter N4 : ";
        cin>>d;
    }
};
class Five : public Four
{
protected:
    int e;
    void setE()
    {
        cout<<"Enter N5 : ";
        cin>>e;
    }
};
class Array : public Five
{
public:
    void formArray()
    {
        cout<<"Enter 5 Element of Array : "<<endl;
        setA();
        setB();
        setC();
        setD();
        setE();
        int arr[5]={a,b,c,d,e};

        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(arr[i]%2==0&&arr[j]%2==0&&arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                }
            }
        }

        cout<<"Sorted Even Number Array is : "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Array a;
    a.formArray();
    return 0;
}
