//Write a program to find the product of two Matrices of size 2 X 2 by overloading * operator.
#include<iostream>
using namespace std;
class Test
{
    int mat[2][2];
public:
    Test(){}
    Test(int mat[2][2])
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Test operator*(Test t)
    {
        Test product;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                product.mat[i][j]=0;
                for(int k=0;k<2;k++)
                {
                    product.mat[i][j]+=mat[i][k]*t.mat[k][j];
                }
            }
        }
        return product;
    }
};
int main()
{
    int mat1[2][2]={{1,2},{4,5}};
    int mat2[2][2]={{1,2},{4,5}};
    Test t1(mat1);
    Test t2(mat2);
    cout<<"Mat 1"<<endl;
    t1.display();
    cout<<"Mat 2"<<endl;
    t2.display();
    Test t3=t1*t2;
    cout<<"Product :"<<endl;
    t3.display();
    return 0;
}
