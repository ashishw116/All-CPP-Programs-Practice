//Write a program to create a class which contains an integer array as data member and create a default constructor and parameterized to assign the values to the data members. Pass these objects to a function of the same class called commonElements() to print the common elements of both the arrays.#include<iostream>
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
    void commonElement(Test t)
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(arr[i]==t.arr[j])
                {
                    cout<<arr[i]<<", ";
                }
            }
        }
    }
};
int main()
{
    int arr[]={18,25,3,9,33};
    Test t1(arr),t2;
    cout<<"\n1st Array\n";
    t1.displayArray();
    cout<<"\n2nd Array\n";
    t2.displayArray();
    cout<<"\nCommon Elements\n";
    t1.commonElement(t2);
    return 0;
}

