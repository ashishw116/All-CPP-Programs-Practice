//Write a program to declare an array as the data member of a class and reverse its each elements using a member function and print the result in the member function only ( Assign the array using the object)
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
    void getReverse()
    {
        for(int i=0;i<5;i++)
        {
            int n=x[i];
            int rev=0;
            while(n>0)
            {
                int rem=n%10;
                rev=rev*10+rem;
                n/=10;
            }
            x[i]=rev;
        }
    }
};

int main()
{
    int x[5]={10,43,25,63,33};
    Test t;
    copy(begin(x),end(x),begin(t.x));
    t.display();
    cout<<"\nAfter Reverse ";
    t.getReverse();
    t.display();
    return 0;
}
