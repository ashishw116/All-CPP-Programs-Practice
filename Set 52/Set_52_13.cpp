//Write a program to create 4 classes which contains one data member and one member function to get the data. Inherit all classes in multiple manner into a class called Matrix to form a matrix in a member function. Send this matrix to a class called Sum to get the sum of the matrix elements.
#include<iostream>
using namespace std;

class Sum
{
public:
    int getSum(int x[2][2])
    {
        int sum=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                sum+=x[i][j];
            }
        }
        return sum;
    }
};
class Test1
{
public:
    int x1;
    void setX1(int x)
    {
        x1=x;
    }
};
class Test2 : public Test1
{
public:
    int x2;
    void setX2(int x)
    {
        x2=x;
    }
};
class Test3 :public Test2
{
public:
    int x3;
    void setX3(int x)
    {
        x3=x;
    }

};
class Test4 : public Test3
{
public:
    int x4;
    void setX4(int x)
    {
        x4=x;
    }
    int getMatrix()
    {
        int mat[2][2]={{x1,x2},{x3,x4}};
        cout<<"Matrix :"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
        Sum sm;
        return sm.getSum(mat);
    }
};

int main()
{
    Test4 t;
    t.setX1(3);
    t.setX2(6);
    t.setX3(2);
    t.setX4(1);
    cout<<"Sum :"<<t.getMatrix();
}
