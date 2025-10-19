//Write a program to declare an array as the data member and check the all elements of the array are prime or not only ( Assign the array using the object).
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
    bool isPrime()
    {
        for(int i=0;i<5;i++)
        {
            int n=x[i];
            if (n < 2)
                return false;
            for(int j=2;j<n;j++)
            {
                if(n%j==0)
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    int x[5]={13,3,3,5,8};
    Test t;
    copy(begin(x),end(x),begin(t.x));
    t.display();
    if(t.isPrime())
        cout<<"\nArray have all prime numbers";
    else
        cout<<"\nArray not have all prime numbers";
    return 0;
}
