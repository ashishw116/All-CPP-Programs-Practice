//Write a program to initialize a square matrix and print its boundary elements.
#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"Enter the rows and columns of matrix :\n";
    cin>>rows>>columns;
    if(rows==columns)
    {
        int m[rows][columns];
        cout<<"Enter the Matrix Elements :\n";
        for(int i=0;i<rows;i++)
            for(int j=0;j<columns;j++)
                cin>>m[i][j];
        cout<<"Matrix Elements :\n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
                cout<<m[i][j]<<" ";
            cout<<"\n";
        }
        cout<<"Enter the Matrix Boundary Elements :\n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if((i==0|j==columns-1)|(j==0|i==rows-1))
                    cout<<m[i][j]<<" ";
                else
                    cout<<"  ";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"This is not square matrix";
    }
    return 0;
}
