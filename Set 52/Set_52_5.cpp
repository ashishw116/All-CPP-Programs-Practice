 //Write a program to create 5 classes which contains one data member and one member function to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data member’s in function of 5th class. Send this array to a class called Evenodd to create two array’s called even array and odd array. Finally send the Even array to a class called Big to get the biggest element and odd array to a class called Small to get the Smallest to print the both in Evenodd class.
 #include<iostream>
 #include<math.h>
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
    int x1;
    void setX1(int x)
    {
        x1=x;
    }
};
class Test2 : public Test1
{
public:
    int x2;
    void setX2(int x)
    {
        x2=x;
    }
};
class Test3 :public Test2
{
public:
    int x3;
    void setX3(int x)
    {
        x3=x;
    }
};
class Test4 : public Test3
{
public:
    int x4;
    void setX4(int x)
    {
        x4=x;
    }
};
class Test5 :public Test4
{
public:
    int x5;
    void setX5(int x)
    {
        x5=x;
    }
    void getArray()
    {
        int xArr[]={x1,x2,x3,x4,x5};
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
    Test5 t;
    t.setX1(3);
    t.setX2(6);
    t.setX3(2);
    t.setX4(1);
    t.setX5(9);
    t.getArray();
}
