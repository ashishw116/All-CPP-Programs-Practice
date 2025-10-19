 //Write a program to create 5 classes which contains one data member and one member function to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data member’s in function of 5th class. Send this array to a class called Evenodd to create two array’s called even array and odd array. Finally send the Even array to a class called Big to get the biggest element and odd array to a class called Small to get the Smallest to print the both in Evenodd class.
 #include<iostream>
 #include<math.h>
using namespace std;
class DataKeeper
{
public:
    float mean;
    float stdDev;
};
class MSD
{
public:
    DataKeeper getMeanSD(int x[])
    {
        DataKeeper dk;
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=x[i];
        }
        dk.mean=(float)sum/5;
        sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=pow((x[i]-dk.mean),2);
        }
        dk.stdDev=sqrt((sum/5));
        return dk;
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
    DataKeeper getArrayMSD()
    {
        int xArr[]={x1,x2,x3,x4,x5};
        cout<<"Array :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<xArr[i]<<" ";
        }
        cout<<"Array :"<<endl;
        MSD m;
        return m.getMeanSD(xArr);
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
    DataKeeper dk=t.getArrayMSD();
    cout<<"Mean : "<<dk.mean<<endl;
    cout<<"MSD : "<<dk.stdDev;
}
