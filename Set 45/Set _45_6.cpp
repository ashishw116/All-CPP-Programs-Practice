//Write a program to illustrate the use of this pointer.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int n;
    void setData(int n);
    int getSum();

};
void Test::setData(int n)
{
    this->n=n;
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
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    t.setData(n);
    int sum=t.getSum();
    cout<<"\n Sum : "<<sum;
    return 0;
}
