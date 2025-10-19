//Write a program to find the mean and standard Deviation of 5 integer numbers using a friend function, where 5 integers numbers are private data members of five different classes. Embed the mean and standard deviation into an object of class DataKeeper and return to main from the friend function and print it.
#include<iostream>
#include<cmath>
using namespace std;
class Test1;
class Test2;
class Test3;
class Test4;
class Test5;
class DataKeeper
{
public :
    float mean,stddev;
};
class Test1
{
    int a;
public:
    Test1(int a)
    {
        this->a=a;
    }
    friend DataKeeper getMeanSd(Test1 t1,Test2 t2,Test3 t3,Test4 t4,Test5 t5);
};
class Test2
{
    int a;
public:
    Test2(int a)
    {
        this->a=a;
    }
    friend DataKeeper getMeanSd(Test1 t1,Test2 t2,Test3 t3,Test4 t4,Test5 t5);
};
class Test3
{
    int a;
public:
    Test3(int a)
    {
        this->a=a;
    }
    friend DataKeeper getMeanSd(Test1 t1,Test2 t2,Test3 t3,Test4 t4,Test5 t5);
};
class Test4
{
    int a;
public:
    Test4(int a)
    {
        this->a=a;
    }
    friend DataKeeper getMeanSd(Test1 t1,Test2 t2,Test3 t3,Test4 t4,Test5 t5);
};
class Test5
{
    int a;
public:
    Test5(int a)
    {
        this->a=a;
    }
    friend DataKeeper getMeanSd(Test1 t1,Test2 t2,Test3 t3,Test4 t4,Test5 t5);
};
DataKeeper getMeanSd(Test1 t1,Test2 t2,Test3 t3,Test4 t4,Test5 t5)
{
    DataKeeper dt;
    int arr[5]={t1.a,t2.a,t3.a,t4.a,t5.a};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    dt.mean=(float)sum/5;
    float variance=0;
    for(int i=0;i<5;i++)
    {
        variance+=pow((arr[i]-dt.mean),2);
    }
    dt.stddev=sqrt(variance/5.0);
    return dt;
}
int main()
{
    Test1 t1(10);
    Test2 t2(20);
    Test3 t3(30);
    Test4 t4(40);
    Test5 t5(50);
    DataKeeper dt=getMeanSd(t1,t2,t3,t4,t5);
    cout<<"Mean : "<<dt.mean<<" Standard Deviation : "<<dt.stddev;
    return 0;
}
