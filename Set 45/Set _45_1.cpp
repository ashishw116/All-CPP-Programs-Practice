//Write a program to find the sum of matrix elements where matrix is data member of class. Assign the matrix using the object.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int x[3][3];
    void setData()
    {
        cout<<"\nEnter the element of matrix 3x3 \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>x[i][j];
            }
        }
    }
    void display()
    {
        cout<<"Matrix is : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Test t;
    t.setData();
    t.display();
    return 0;
}

