 //Write a program to create 5 classes which contains one data member and one member function to get the data. Inherit all classes in multilevel manner into a 5th class and create an array for these data member’s in function of 5th class. Send this array to a class called Evenodd to create two array’s called even array and odd array. Finally send the Even array to a class called Big to get the biggest element and odd array to a class called Small to get the Smallest to print the both in Evenodd class.
 #include<iostream>
using namespace std;
class Small
{
public:
    int getSmall(int x[],int n)
    {
        int s=x[0];
        for(int i=1;i<n;i++)
        {
            if(x[i]<s)
                s=x[i];
        }
        return s;
    }
};
class Big
{
public:
    int getBig(int x[],int n)
    {
        int b=x[0];
        for(int i=1;i<n;i++)
        {
            if(x[i]>b)
                b=x[i];
        }
        return b;
    }
};
class EvenOdd
{
public:
    void saperateArray(int x[])
    {
        int e=0;
        int o=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]%2==0)
                e++;
            else
                o++;
        }
        int evenArr[e];
        int oddArr[o];
        e=0,o=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]%2==0)
                evenArr[e++]=x[i];
            else
                oddArr[o++]=x[i];
        }
        cout<<"Even Array :"<<endl;
        for(int i=0;i<e;i++)
        {
            cout<<evenArr[i]<<" ";
        }
        cout<<endl;
        cout<<"Odd Array :"<<endl;
        for(int i=0;i<o;i++)
        {
            cout<<oddArr[i]<<" ";
        }
        Big b;
        Small s;
        int big=b.getBig(evenArr,e);
        int small=s.getSmall(oddArr,o);
        cout<<endl<<"Even Big : "<<big;
        cout<<endl<<"Odd Small : "<<small;
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
        EvenOdd eo;
        eo.saperateArray(xArr);
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
