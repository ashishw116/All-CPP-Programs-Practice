//Write a program to declare an array as the data member and give the data to the array using getData( ) and count number of positive, negative and zero elements.
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
    void getData()
    {
        for(int i=0;i<5;i++)
            cin>>x[i];
    }
    void getCount()
    {
        int pc=0,nc=0,zc=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]>0)
                pc++;
            else if(x[i]<0)
                nc++;
            else
                zc++;
        }
        cout<<"\nPositive count : "<<pc<<" Negative count : "<<nc<<" Zero count : "<<zc;
    }
};

int main()
{
    Test t;
    cout<<"\nEnter the array elements \n";
    t.getData();
    t.display();
    t.getCount();
    return 0;
}
