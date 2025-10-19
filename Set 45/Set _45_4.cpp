//Write a program to find the GCD of two integers, where two integers , gcd are the data members of the class. Define the member functions outside the class.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int x,y,gcd;
    void setData();
    int getGcd();

};
void Test::setData()
{
    cout<<"Enter the two integers : \n";
    cin>>x>>y;
}
int Test::getGcd()
{
    int rem=x%y;
    while(rem!=0)
    {
        x=y;
        y=rem;
        rem=x%y;
    }
    return y;
}
int main()
{
    Test t;
    t.setData();
    int gcd=t.getGcd();
    cout<<"\n GCD : "<<gcd;
    return 0;
}
