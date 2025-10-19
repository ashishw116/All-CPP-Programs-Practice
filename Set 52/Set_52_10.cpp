//Write a program to create 5 classes which contains one data member and one parameterized constructor to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data member’s in function of 5th class. Send this array to a function of another class called Reverse to find the reverse of array and print the result in the fifth class only.
#include<iostream>
using namespace std;
class Reverse
{
public:
    void getReverseArr(int x[])
    {
        for(int i=0,j=4;i<j;i++,j--)
        {
            swap(x[i],x[j]);
        }
    }
};
class Test1
{
public:

    int a;
    Test1(int a)
    {
        this->a=a;
    }
};
class Test2 : public Test1
{
public:

    int b;
    Test2(int a,int b):Test1(a)
    {
        this->b=b;
    }
};
class Test3 : public Test2
{
public:

    int c;
    Test3(int a,int b,int c):Test2(a,b)
    {
        this->c=c;
    }
};
class Test4 : public Test3
{
public:

    int d;
    Test4(int a,int b,int c,int d):Test3(a,b,c)
    {
        this->d=d;
    }
};
class Test5 : public Test4
{
public:

    int e;
    Test5(int a,int b,int c,int d,int e):Test4(a,b,c,d)
    {
        this->e=e;
    }
    void getArray()
    {
        int xArr[]={a,b,c,d,e};
        cout<<"Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<xArr[i]<<" ";
        }
        Reverse rev;
        rev.getReverseArr(xArr);
        cout<<endl<<"Reverse Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<xArr[i]<<" ";
        }
    }
};
int main()
{
    Test5 t(1,4,3,8,6);
    t.getArray();
    return 0;
}
