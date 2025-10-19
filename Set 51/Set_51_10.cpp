//Write a program to create 5 classes which contains one data member and one member function to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data members in function of 5th class. Then pass this array to a function of the class called Sort to sort the array in descending order. And print the resulted array in the 5th Class only.
#include<iostream>
using namespace std;
class Sort
{
public:
    void sortArr(int x[])
    {
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(x[i]<x[j])
                {
                    swap(x[i],x[j]);
                }
            }
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
class Test2
{
public:
    int x2;
    void setX2(int x)
    {
        x2=x;
    }
};
class Test3
{
public:
    int x3;
    void setX3(int x)
    {
        x3=x;
    }
};
class Test4
{
public:
    int x4;
    void setX4(int x)
    {
        x4=x;
    }
};
class Test5
{
public:
    int x5;
    void setX5(int x)
    {
        x5=x;
    }
};
class ArrayG : public Test1,public Test2,public Test3,public Test4,public Test5
{
public:
    int arr[5];
    void display()
    {
        cout<<"Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"Array :"<<endl;
    }
    void getArray()
    {
        arr[0]=x1;
        arr[1]=x2;
        arr[2]=x3;
        arr[3]=x4;
        arr[4]=x5;
        display();
        Sort s;
        s.sortArr(arr);
        display();
    }
};
int main()
{
    ArrayG arr;
    arr.setX1(3);
    arr.setX2(6);
    arr.setX3(2);
    arr.setX4(1);
    arr.setX5(9);
    arr.getArray();
}
