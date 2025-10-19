/*WAP to swap the biggest and smallest elements of an array where array will be the data member of a class. And pass the object as argument to the other class Called big small to find the biggest and smallest.( use constructors to load the objects)*/
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
class BigSmall
{
public:
    int big,small;
    void getBigSmall(Test t)
    {
        big=t.arr[0];
        small=t.arr[0];
        for(int i=1;i<5;i++)
        {
            if(big<t.arr[i])
                big=t.arr[i];
            if(small>t.arr[i])
                small=t.arr[i];
        }
    }
    void showData()
    {
        cout<<"\n Big :"<<big<<" Small :"<<small;
    }
};

int main()
{
    int arr[]={18,25,3,45,33};
    Test t1(arr);
    cout<<"Original Array\n";
    t1.displayArray();
    BigSmall bs;
    bs.getBigSmall(t1);
    bs.showData();
    return 0;
}

