//Write a program to check a matrix is Unit or not by inheriting the Class one, Two, Thee and Four with their private data member and private member functions to load the data member into a class called Matrix. Create a function called formMatrix() in class Matrix to form a matrix of size 2 X 2 and send this matrix to class called Unit to check whether the matrix is Unit or not.
#include<iostream>
using namespace std;
class One
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    virtual void setX(int x)
    {
        loadX(x);
    }
    int oneX()
    {
        return x;
    }
};
class Two : virtual public One
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int twoX()
    {
        return x;
    }
};
class Three : virtual public Two
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int threeX()
    {
        return x;
    }
};
class Four : virtual public Three
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int fourX()
    {
        return x;
    }
};
class Unit
{
public:
    bool checkUnitMat(int mat[2][2])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (i == j && mat[i][j] != 1)
                    return false;
                else if (i != j && mat[i][j] != 0)
                    return false;
            }
        }
        return true;
    }
};
class Matrix : virtual public One,virtual public Two,virtual public Three,virtual public Four
{
public:
    int mat[2][2];
    void formMatrix()
    {
        int a,b,c,d;
        cout<<endl<<"Enter 4 number :";
        cin>>a>>b>>c>>d;
        One::setX(a);
        Two::setX(b);
        Three::setX(c);
        Four::setX(d);
        mat[0][0]=One::oneX();
        mat[0][1]=Two::twoX();
        mat[1][0]=Three::threeX();
        mat[1][1]=Four::fourX();
        cout<<"Matrix is : "<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        Unit u;
        if(u.checkUnitMat(mat))
            cout<<endl<<"This is Unit Matrix";
        else
            cout<<endl<<"This is Not Unit Matrix";
    }
};
int main()
{
    Matrix m;
    m.formMatrix();
    return 0;
}
