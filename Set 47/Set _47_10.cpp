//Write a program to create a class called matrix which contains an integer matrix of size 3x3 and assign the value to the matrix using parameterized constructor ( For non Zero elements). Now send this object of this matrix class to the function called getBoundaryElements() of class called Elements and return the boundary elements in another matrix called bmat as data member of the class. Where non boundary elements should be Zero.
#include<iostream>
#include<cmath>
using namespace std;
class Matrix
{
public:
    int mat[3][3];
    int bmat[3][3];
    Matrix()
    {
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
    void displayBMatrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<this->bmat[i][j]<<" ";
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
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==0||j==0||j==2||i==2)
                {
                    m.bmat[i][j]=m.mat[i][j];
                }
                else{
                    m.bmat[i][j]=0;
                }
            }
        }
        return m;
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
    m2.displayBMatrix();
    return 0;
}

