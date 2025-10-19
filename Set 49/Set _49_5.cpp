//Write a program to find the transpose of a matrix using the friend function, where matrix is the private data member of the class. Print the resultant matrix in the friend function only.
#include<iostream>
#include<cmath>
using namespace std;
class Matrix
{
    int mat[3][3];
public:
    Matrix(int mat[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    friend void transposeMat(Matrix m);
};
void transposeMat(Matrix m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            int t=m.mat[i][j];
            m.mat[i][j]=m.mat[j][i];
            m.mat[j][i]=t;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m.mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Matrix m(mat);
    cout<<"Transpose Matrix : "<<endl;
    transposeMat(m);
    return 0;
}
