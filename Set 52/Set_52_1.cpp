 //Write a program to create 5 classes which contains one data member and one member function to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data members in function of 5th class. Then pass this array to a function of the class called Sort to sort the array in descending order. And print the resulted array in the 5th Class only.
 #include<iostream>
using namespace std;
class Sort
{
public:
    void sortArr(int x[])
    {
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(x[i]<x[j])
                {
                    swap(x[i],x[j]);
                }
            }
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
};
class Test5 :public Test4
{
public:
    int x5;
    void setX5(int x)
    {
        x5=x;
    }
    void getArray()
    {
        int xArr[]={x1,x2,x3,x4,x5};
        cout<<"Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<xArr[i]<<" ";
        }
        cout<<"Array :"<<endl;
        Sort s;
        s.sortArr(xArr);
        cout<<"Sorted Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<xArr[i]<<" ";
        }
        cout<<"Array :"<<endl;
    }
};
int main()
{
    Test5 t;
    t.setX1(3);
    t.setX2(6);
    t.setX3(2);
    t.setX4(1);
    t.setX5(9);
    t.getArray();
}
