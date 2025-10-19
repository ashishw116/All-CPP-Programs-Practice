//Write a program to illustrate the use of destructors
#include<iostream>
#include<cmath>
using namespace std;
class Matrix
{
public:
    int mat[3][3];
    Matrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                this->mat[i][j]=0;
            }
        }
    }
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
    void displayMatrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<this->mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
class Elements
{
public:
    Matrix getBoundaryElements(Matrix m)
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==0||j==0||j==2||i==2)
                {
                    temp.mat[i][j]=m.mat[i][j];
                }
            }
        }
        return temp;
    }
};
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Matrix m(mat);
    Elements ele;
    cout<<"\nMatrix\n";
    m.displayMatrix();
    Matrix m2=ele.getBoundaryElements(m);
    cout<<"\nMatrix Boundary Elements\n";
    m2.displayMatrix();
    return 0;
}

