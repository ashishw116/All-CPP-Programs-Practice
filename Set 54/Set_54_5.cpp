//Write a program to print the trace and normal of a 2X2 matrix where it has five classes Row1, Row2, Matrix, TraceNormal and Datakeeper. Class Row1 has two private data members which are the elements of first row and set it's value by using private member functions. Same for class Row2 as Row1 class. In class Matrix form a matrix and return it to main(). And in class TraceNormal calculate trace and normal. Class Datakeeper stores the value of trace and normal to return it to main function and print it.
#include<iostream>
#include<cmath>
using namespace std;
class Row1
{
private:
    int x1,x2;
    void loadRow1(int x1,int x2)
    {
        this->x1=x1;
        this->x2=x2;
    }
public:
    void setRow1(int x1,int x2)
    {
        loadRow1(x1,x2);
    }
    int getRow1Ele1()
    {
        return x1;
    }
    int getRow1Ele2()
    {
        return x2;
    }
};
class Row2
{
private:
    int x1,x2;
    void loadRow2(int x1,int x2)
    {
        this->x1=x1;
        this->x2=x2;
    }
public:
    void setRow2(int x1,int x2)
    {
        loadRow2(x1,x2);
    }
    int getRow2Ele1()
    {
        return x1;
    }
    int getRow2Ele2()
    {
        return x2;
    }
};
class Matrix
{
public:
    void formMatrix(int mat[2][2])
    {
        Row1 r1;
        Row2 r2;
        int x1,x2,x3,x4;
        cout<<"Enter 2 Elements Of Row 1 : ";
        cin>>x1>>x2;
        r1.setRow1(x1,x2);
        cout<<endl<<"Enter 2 Elements Of Row 2 : ";
        cin>>x3>>x4;
        r2.setRow2(x3,x4);
        mat[0][0] = r1.getRow1Ele1();
        mat[0][1] = r1.getRow1Ele2();
        mat[1][0] = r2.getRow2Ele1();
        mat[1][1] = r2.getRow2Ele2();
        cout << "\nMatrix is:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};
class Datakeeper
{
private:
    int trace;
    float normal;

public:
    void setData(int t, float n)
    {
        trace = t;
        normal = n;
    }

    void displayData()
    {
        cout << "\nTrace of Matrix: " << trace;
        cout << "\nNormal of Matrix: " << normal << endl;
    }
};
class TraceNormal
{
public:
    void calculate(int mat[2][2], int &trace, float &normal)
    {
        trace = mat[0][0] + mat[1][1];
        normal = sqrt(mat[0][0] * mat[0][0] + mat[0][1] * mat[0][1] +
                      mat[1][0] * mat[1][0] + mat[1][1] * mat[1][1]);
    }
};
int main()
{
    int mat[2][2];
    Matrix m;
    m.formMatrix(mat);
    int trace;
    float normal;
    TraceNormal tn;
    tn.calculate(mat, trace, normal);
    Datakeeper d;
    d.setData(trace, normal);
    d.displayData();
    return 0;
}
