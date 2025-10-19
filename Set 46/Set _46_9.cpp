/*WAP to create a class which contains an integer array as its data member. Create 2 objects for the class and give the value to the array using default constructor and parameterized constructor and merge both one after another using methods in the same class.*/
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int arr[5];
    Test()
    {
        for(int i=0,j=3;i<5;i++,j+=3)
        {
            arr[i]=j;
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
    void mergeArr(Test t)
    {
        int mrg[10];
        int ind=0;
        for(int i=0;i<5;i++)
            mrg[ind++]=arr[i];
        for(int i=0;i<5;i++)
            mrg[ind++]=t.arr[i];
        for(int i=0;i<10;i++)
        {
            cout<<mrg[i]<<", ";
        }
    }
};

int main()
{
    int arr[5]={10,20,30,40,50};
    Test t1,t2(arr);
    cout<<"\n1st Array"<<endl;
    t1.displayArray();
    cout<<"\n2nd Array"<<endl;
    t2.displayArray();
    cout<<"\nMerge Array"<<endl;
    t1.mergeArr(t2);
    return 0;
}

