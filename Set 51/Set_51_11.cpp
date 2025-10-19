//Write a program to illustrate the overloading of ~ operator to get the transpose of a matrix of size 3X3.
#include<iostream>
using namespace std;
class Test
{
    int mat[3][3];
public:
    Test(int mat[3][3])
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                this->mat[i][j]=mat[i][j];
            }
        }
    }
    void operator~()
    {
        cout<<"OG Matrix"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<"Transpose Of Matrix"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[j][i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Test t(mat);
    ~t;
    return 0;
}
