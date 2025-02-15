#include<iostream>
#include<conio.h>
using namespace std;

void sum(int x)
{
    cout<<x<<endl;
}
void sum(double x)
{
    cout<<x<<endl;
}

int main()
{
    sum(10);
    sum(10.54);

    getch();
}
