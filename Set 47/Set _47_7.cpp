//Write a program to create a class called matrix which contains an integer matrix of size 3x3 and assign the value to the matrix using parameterized constructor. Now send this object of this matrix class to the function called getNormTransnorm() of class called Transform and return the trans and normal by embedding into object of class called Datakeeper and print trans and normal at main.#include<iostream>
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
class Datakeeper
{
public:
    float trace;
    float normal;
    void getData()
    {
        cout<<"\n Trace :"<<trace<<" Normal :"<<normal<<endl;
    }
};
class Transform
{
public:
    Datakeeper getNormTransnorm(Matrix m)
    {
        Datakeeper dk;
        int sumii=0,sumij=0;
        for(int i=0;i<3;i++)
        {
            sumii+=m.mat[i][i];
            for(int j=0;j<3;j++)
            {
                sumij+=m.mat[i][j]*m.mat[i][j];
            }
        }
        dk.trace=sumii;
        dk.normal=sqrt(sumij);
        return dk;

    }
};
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Matrix m(mat);
    cout<<"\nMatrix\n";
    m.displayMatrix();
    Transform t;
    Datakeeper dk=t.getNormTransnorm(m);
    dk.getData();
    return 0;
}

