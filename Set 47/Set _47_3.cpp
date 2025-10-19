/*Write a program to create a class which contains an integer array as data member and create a default constructor to assign the values to the data members. Pass the object of this class to a method of another class to get the reverse array and return the array to the main class and print it.*/
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int arr[5];
    Test()
    {
        for(int i=0,x=3;i<5;i++,x+=3)
        {
            this->arr[i]=x;
        }
    }
    void displayArray()
    {
        for(int i=0;i<5;i++)
        {
            cout<<this->arr[i]<<", ";
        }
    }
};
class Sort
{
public:
    Test reverseArr(Test t)
    {
        for(int i=0,j=4;i<2;i++,j--)
        {
            int temp=t.arr[i];
            t.arr[i]=t.arr[j];
            t.arr[j]=temp;
        }
        return t;
    }
};

int main()
{
    Test t1;
    cout<<"Original Array\n";
    t1.displayArray();
    Sort s;
    t1=s.reverseArr(t1);
    cout<<"\nReverse Array\n";
    t1.displayArray();
    return 0;
}

