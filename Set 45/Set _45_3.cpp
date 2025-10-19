//Write a program to print the Principal and Secondary diagonal elements of a square matrix, where the matrix is the data member of a class, Assign the matrix using the getData ( )
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int x[3][3];
    void setData()
    {
        cout<<"\n Enter the element of matrix 3x3 \n";
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
        cout<<" Matrix is : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void getPD()
    {
        cout<<"\nPrinciple Diagonal : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j)
                    cout<<x[i][j];
                cout<<" ";
            }
            cout<<endl;
        }
    }
    void getSD()
    {
        cout<<"\nSecondary Diagonal : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if((i+j)==2)
                    cout<<x[i][j];
                cout<<" ";
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
    t.getPD();
    t.getSD();
    return 0;
}
