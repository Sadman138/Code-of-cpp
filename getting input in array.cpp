#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5];

    for(int i=0;i<5;i++)
    {
        cout<<"marks for student"<<i+1<<" = ";
        cin>>marks[i];
    }
    cout<<"marks are:";
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }
}
