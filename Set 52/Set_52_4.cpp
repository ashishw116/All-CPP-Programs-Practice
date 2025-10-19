 //WAP to create 4 classes which contains one data member and one member function to get the data. Inherit all classes in multilevel manner into a 4th class and create a Matrix for these data members in a function of 4th class. Send this Matrix to a class called Transpose to create transpose of the Matrix in method called findTranspose and print it.
 #include<iostream>
using namespace std;
class Transpose
{
public:
    void findTranspose(int x[2][2])
    {
        int mat[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                mat[i][j]=x[j][i];
            }
        }
        cout<<"Transpose Matrix :"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
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
    void getMatrix()
    {
        int mat[2][2]={{x1,x2},{x3,x4}};
        cout<<"Matrix :"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
        Transpose t;
        t.findTranspose(mat);
    }
};

int main()
{
    Test4 t;
    t.setX1(3);
    t.setX2(6);
    t.setX3(2);
    t.setX4(1);
    t.getMatrix();
}
