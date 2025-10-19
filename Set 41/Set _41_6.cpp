//Write a program to find the matrix multiplication of the two matrices.
#include<iostream>
using namespace std;
int main()
{
    int rows1,columns1,rows2,columns2;
    cout<<"Enter the rows and columns of 1st matrix :\n";
    cin>>rows1>>columns1;
    cout<<"Enter the rows and columns of 2nd matrix :\n";
    cin>>rows2>>columns2;
    if(rows2==columns1)
    {
        int m1[rows1][columns1];
        cout<<"Enter the 1st Matrix Elements :\n";
        for(int i=0;i<rows1;i++)
            for(int j=0;j<columns1;j++)
                cin>>m1[i][j];
        int m2[rows2][columns2];
        cout<<"Enter the 2nd Matrix Elements :\n";
        for(int i=0;i<rows2;i++)
            for(int j=0;j<columns2;j++)
                cin>>m2[i][j];
        cout<<"1st Matrix Elements :\n";
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns1;j++)
                cout<<m1[i][j]<<" ";
            cout<<"\n";
        }
        cout<<"2nd Matrix Elements :\n";
        for(int i=0;i<rows2;i++)
        {
            for(int j=0;j<columns2;j++)
                cout<<m2[i][j]<<" ";
            cout<<"\n";
        }
        int mul[rows1][columns2];
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns2;j++)
            {
                mul[i][j]=0;
                for(int k=0;k<columns1;k++)
                {
                    mul[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        cout<<"Multiplication Matrix Elements :\n";
        for(int i=0;i<rows1;i++)
        {
            for(int j=0;j<columns2;j++)
                cout<<mul[i][j]<<" ";
            cout<<"\n";
        }
    }
    else
    {
        cout<<"multiplication can not performed";
    }
    return 0;
}
