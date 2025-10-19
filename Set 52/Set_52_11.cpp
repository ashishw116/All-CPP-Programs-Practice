//Write a program to create 5 classes which contains one data member and one parameterized constructor to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data member’s in function of 5th class. Send this array to a function of another class called ReverseElement to find the reverse of each element of the array and print the result in the fifth class only.
#include<iostream>
using namespace std;
class ReverseElement
{
public:
    void getReverseEle(int x[])
    {
        for(int i=0;i<5;i++)
        {
            int n=x[i];
            int rev=0;
            while(n>0)
            {
                int rem=n%10;
                rev=rev*10+rem;
                n/=10;
            }
            x[i]=rev;
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
        ReverseElement rev;
        rev.getReverseEle(xArr);
        cout<<endl<<"Reverse Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<xArr[i]<<" ";
        }
    }
};
int main()
{
    Test5 t(14,4,394,8,61);
    t.getArray();
    return 0;
}
