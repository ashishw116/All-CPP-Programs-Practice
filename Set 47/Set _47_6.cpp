//Write a program which contains an integer matrix of size 2x2 as a data member and assign the values to the matrix using parameterized constructor and create a method in the same class called getTranspose() which returns the transpose of the matrix to the Main class.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int mat[2][2];
    Test()
    {

    }
    Test(int mat[2][2])
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    Test getTranspose()
    {
        Test t;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                t.mat[j][i]=mat[i][j];
            }
        }
        return t;
    }
    void displayMatrix()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<this->mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int mat[2][2]={{1,2},{3,4}};
    Test t1(mat);
    cout<<"\nMatrix\n";
    t1.displayMatrix();
    Test trans=t1.getTranspose();
    cout<<"\nTranspose Matrix\n";
    trans.displayMatrix();
    return 0;
}

