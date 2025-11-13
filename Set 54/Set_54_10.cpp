//Write a program to inherit 4 classes in Multi- Level manner into a 5th class called Matrix. Each super class are having One protected data member and one protected member function. In class called Matrix form a matrix and sort the principal diagonal elements into Ascending order and print the resulted matrix.
#include<iostream>
using namespace std;
class One
{
protected:
    int a;
    void setA()
    {
        cout<<"Enter N1 : ";
        cin>>a;
    }
};
class Two : public One
{
protected:
    int b;
    void setB()
    {
        cout<<"Enter N2 : ";
        cin>>b;
    }
};
class Three : public Two
{
protected:
    int c;
    void setC()
    {
        cout<<"Enter N3 : ";
        cin>>c;
    }
};
class Four : public Three
{
protected:
    int d;
    void setD()
    {
        cout<<"Enter N4 : ";
        cin>>d;
    }
};
class Matrix : public Four
{
public:
    void formMatrix()
    {
        cout<<"Enter 4 Element of Matrix : "<<endl;
        setA();
        setB();
        setC();
        setD();
        int mat[2][2]={{a,b},{c,d}};
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
        for(int i=0;i<1;i++)
        {
            if(mat[i][i]>mat[i+1][i+1])
                swap(mat[i][i],mat[i+1][i+1]);
        }
        cout<<"Sorted Principal Diagonal is : "<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main()
{
    Matrix m;
    m.formMatrix();
    return 0;
}
