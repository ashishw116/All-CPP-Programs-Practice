//Write a program to find the sum up to n, Where n is the data member of the class. Define the member function outside the class and getSum() should be recursion function.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int n;
    void setData();
    int getSum();

};
void Test::setData()
{
    cout<<"Enter the number : \n";
    cin>>n;
}
int Test::getSum()
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    return sum;
}
int main()
{
    Test t;
    t.setData();
    int sum=t.getSum();
    cout<<"\n Sum : "<<sum;
    return 0;
}
