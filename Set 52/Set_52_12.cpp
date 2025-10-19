//Write a program to create 5 classes which contains one data member and one parameterized constructor to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data member’s in function of 5th class. Send this array to a function of another class called ReverseElement to find the reverse of each element of the array and print the result in the fifth class only.
#include<iostream>
using namespace std;
class Elements
{
public:
    int pde[2];
    int sde[2];
};
class DiagonalElements
{
public:
    Elements getPDE_SDE(int x[2][2])
    {
        Elements ele;
        int ind=0;
        for(int i=0;i<2;i++)
        {
            ele.pde[ind++]=x[i][i];
        }
        ind=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(i+j==1)
                {
                    ele.sde[ind++]=x[i][j];
                }
            }
        }
        return ele;
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
    Elements getMatrix()
    {
        int mat[2][2]={{x1,x2},{x3,x4}};
        cout<<"Matrix :"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
        DiagonalElements de;
        return de.getPDE_SDE(mat);
    }
};

int main()
{
    Test4 t;
    t.setX1(3);
    t.setX2(6);
    t.setX3(2);
    t.setX4(1);
    Elements ele;
    ele=t.getMatrix();
    cout<<"Pricipal Diagonal Elements :";
    for(int i=0;i<2;i++)
        cout<<ele.pde[i]<<" ";
    cout<<endl;
    cout<<"Secondary Diagonal Elements :";
    for(int i=0;i<2;i++)
        cout<<ele.sde[i]<<" ";
}
