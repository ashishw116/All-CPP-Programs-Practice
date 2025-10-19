//Write a program to create a class called matrix which contains an integer matrix of size 3x3 and assign the value to the matrix using parameterized constructor. Now send this object of this matrix class to the function called getPrincipalElements() of class called Elements and return the elements in an array as the datamemeber of the same class.
#include<iostream>
#include<cmath>
using namespace std;
class Matrix
{
public:
    int mat[3][3];
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
};
class Elements
{
public:
    int aboveSDE[3];
    int belowSDE[3];
    void getaboveSecondaryDiagonalElements(Matrix m)
    {
        int ind=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i+j<2)
                {
                    aboveSDE[ind++]=m.mat[i][j];
                }
            }
        }
    }
    void getBelowSecondaryDiagonalElements(Matrix m)
    {
        int ind=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i+j>2)
                {
                    belowSDE[ind++]=m.mat[i][j];
                }
            }
        }
    }
    void getData()
    {
        cout<<"\nElements Above Secondary Diagonal: \n";
        for(int i=0;i<3;i++)
        {
            cout<<aboveSDE[i]<<", ";
        }
        cout<<"\nElements Below Secondary Diagonal: \n";
        for(int i=0;i<3;i++)
        {
            cout<<belowSDE[i]<<", ";
        }
    }

};
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Matrix m(mat);
    cout<<"\nMatrix\n";
    m.displayMatrix();
    Elements ele;
    ele.getaboveSecondaryDiagonalElements(m);
    ele.getBelowSecondaryDiagonalElements(m);
    ele.getData();
    return 0;
}

