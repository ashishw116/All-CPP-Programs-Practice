//Write a program to find the sum of two Matrices of size 2 X 2 by overloading + operator.
#include<iostream>
#include<cmath>
using namespace std;
class Matrix
{
    int mat[2][2];
public:
    void setData(int mat[2][2])
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    void getData()
    {
        cout<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    Matrix operator+(Matrix m)
    {
        Matrix res;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                res.mat[i][j]=mat[i][j]+m.mat[i][j];
            }
        }
        return res;
    }
};
int main()
{
    int mat1[2][2]={{1,2},{3,4}},mat2[2][2]={{1,2},{3,4}};
    Matrix m1,m2;
    m1.setData(mat1);
    m2.setData(mat2);
    cout<<"1st Matrix";
    m1.getData();
    cout<<"2nd Matrix";
    m2.getData();
    Matrix m3=m1+m2;
    cout<<"Addition Matrix";
    m3.getData();
}
