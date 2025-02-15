#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(10,3);
    subtraction(10,3);
    multiplication(10,3);
    division(10,3);

    cout<<"all fuction have called";

    getch();
}

void addition(int a,int b)
{
    cout<<"addition: "<<a+b<<endl;
}
void subtraction(int a,int b)
{
    cout<<"subtraction: "<<a-b<<endl;
}
void multiplication(int a,int b)
{
    cout<<"multiplication: "<<a*b<<endl;
}
void division(int a,int b)
{
    if(b!=0)
        cout<<"division: "<<a/b<<endl;
    else
        cout<<"division by zero is not allowed"<<endl;
}
