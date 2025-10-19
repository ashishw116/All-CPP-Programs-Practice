//Write a program to find the sum for array of objects, where class contains a single data member.
#include<iostream>
#include<cmath>
using namespace std;
class DataKeeper
{
    int n;
public:
    void setData(int x)
    {
        n=x;
    }
    int getSum(DataKeeper arr[])
    {
        int sum=0;
        for(int i=0;i<5;i++)
            sum+=arr[i].n;
        return sum;
    }
};
int main()
{
    DataKeeper dk[5];
    for(int i=0;i<5;i++)
    {
        dk[i].setData((i+1)*10);
    }
    int sum=dk[0].getSum(dk);
    cout<<"Sum : "<<sum;
    return 0;
}

