//Write a program to read a text file and print its contents as strings.
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ipFile="E://sampal.txt";
    ifstream ifs(ipFile);
    string line;
    while(getline(ifs,line))
    {
        cout<<line<<endl;
    }
    return 0;
}
