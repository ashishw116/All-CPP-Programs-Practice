//Write a program to find the transpose of a given matrix.
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
        int trns[columns][rows];
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                trns[j][i]=m[i][j];
            }
        }
        cout<<"Transpose of Matrix Elements :\n";
        for(int i=0;i<columns;i++)
        {
            for(int j=0;j<rows;j++)
                cout<<trns[i][j]<<" ";
            cout<<"\n";
        }
    }
    else
    {
        cout<<"This is not square matrix";
    }
    return 0;
}
