//write a program to swap the said rows and columns in two different member functions of a class. Assign the matrix using the object.
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int x[3][3];
    void setData()
    {
        cout<<"\n Enter the element of matrix 3x3 \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>x[i][j];
            }
        }
    }
    void display()
    {
        cout<<" Matrix is : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void swapRow()
    {
        int r1,r2;
        repeat:
        cout<<"\n Enter Rows Number to swap (1 to 3)\n";
        cin>>r1>>r2;
        r1--;
        r2--;
        if((r1>=0&&r1<3) && (r2>=0&&r2<3))
        {
            for(int i=0;i<3;i++)
            {
                int temp=x[r1][i];
                x[r1][i]=x[r2][i];
                x[r2][i]=temp;
            }
        }
        else
        {
            cout<<"\n Enter Valid Row ";
            goto repeat;
        }
    }
    void swapColumn()
    {
        int c1,c2;
        repeat:
        cout<<"\n Enter Columns Number to swap (1 to 3)\n";
        cin>>c1>>c2;
        c1--;
        c2--;
        if((c1>=0&&c1<3) && (c2>=0&&c2<3))
        {
            for(int i=0;i<3;i++)
            {
                int temp=x[i][c1];
                x[i][c1]=x[i][c2];
                x[i][c2]=temp;
            }
        }
        else
        {
            cout<<"\n Enter Valid Columns ";
            goto repeat;
        }
    }
};

int main()
{
    Test t;
    t.setData();
    t.display();
    do
    {
        cout<<"\n 1 : row swap \n 2 : column swap \n 3 : display \n 4 : Exit ";
        cout<<"\n Enter Your Choice :";
        int c;
        cin>>c;
        switch(c)
        {
        case 1 :
            t.swapRow();
            break;
        case 2 :
            t.swapColumn();
            break;
        case 3 :
            t.display();
            break;
        case 4 :
            return false;
        default :
            cout<<"\n Invalid Choice";
        }
    }while(true);
    return 0;
}
