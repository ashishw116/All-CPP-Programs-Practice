//WAP to find biggest and smallest of an array in a function of a class and return both by embedding it into an object of another class.
#include<iostream>
#include<cmath>
using namespace std;
class DataKeeper
{
public:
    int big,small;
    void setData(int a,int b)
    {
        big=a;
        small=b;
    }
};
class BigSmall
{
public:
    DataKeeper getBigSmall(int arr[])
    {
        int big=arr[0],small=arr[0];
        for(int i=1;i<5;i++)
        {
            if(arr[i]>big)
                big=arr[i];
            if(arr[i]<small)
                small=arr[i];
        }
        DataKeeper dk;
        dk.setData(big,small);
        return dk;
    }
};
int main()
{
    int arr[]={10,30,5,15,60};
    BigSmall bs;
    DataKeeper dk=bs.getBigSmall(arr);
    cout<<"Big : "<<dk.big<<" Small : "<<dk.small;
    return 0;
}

