//Write a program to find the sum of two matrices belongs to two different classes using a friend function and print the sum matrix in the friend function only. The matrix data members of the two classes should be private.
#include<iostream>
#include<cmath>
using namespace std;
class Matrix2;
class Matrix1
{
    int mat[3][3];
public:
    Matrix1(int mat[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    friend void sum(Matrix1 m1,Matrix2 m2);
};
class Matrix2
{
    int mat[3][3];
public:
    Matrix2(int mat[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    friend void sum(Matrix1 m1,Matrix2 m2);
};
void sum(Matrix1 m1,Matrix2 m2)
{
    int result[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=m1.mat[i][j]+m2.mat[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Matrix1 m1(mat1);
    Matrix2 m2(mat2);
    cout<<"Sum Matrix : "<<endl;
    sum(m1,m2);
    return 0;
}
