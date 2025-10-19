/*Write a program to create a class which contains an integer array as data member and create a parameterized constructor to assign the value to the data member. Pass the object of this class to a method of another class to sort them in ascending order and return the array to the main and print it.*/
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int arr[5];
    Test(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            this->arr[i]=arr[i];
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
    Test sortArray(Test t)
    {
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(t.arr[i]>t.arr[j])
                {
                    int temp=t.arr[i];
                    t.arr[i]=t.arr[j];
                    t.arr[j]=temp;
                }
            }
        }
        return t;
    }
};

int main()
{
    int arr[5]={54,23,12,56,4};
    Test t1(arr);
    cout<<"Original Array\n";
    t1.displayArray();
    Sort s;
    t1=s.sortArray(t1);
    cout<<"\nSorted Array\n";
    t1.displayArray();
    return 0;
}

