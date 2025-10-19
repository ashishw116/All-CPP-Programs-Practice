//Write a program to declare an array as the data member and check the elements of the array are in Fibonacci series or not ( Assign the array using the object).
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int x[5];
    void display()
    {
        cout<<"Array is : \n";
        for(int i=0;i<5;i++)
        {
            cout<<x[i]<<" ";
        }
    }
    bool isFibonacciSeries()
    {
        int f=x[0],s=x[1];
        for(int i=2;i<5;i++)
        {
            int t=f+s;
            if(x[i]!=t)
                return false;
            f=s;
            s=t;
        }
        return true;
    }
};

int main()
{
    int x[5]={1,3,3,5,8};
    Test t;
    copy(begin(x),end(x),begin(t.x));
    t.display();
    if(t.isFibonacciSeries())
        cout<<"\nArray are in Fibonacci series";
    else
        cout<<"\nArray are not in Fibonacci series";
    return 0;
}
