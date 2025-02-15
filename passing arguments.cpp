#include<iostream>
#include<conio.h>
using namespace std;

void display(int *num)
{
    *num=20;
}
int main()
{
    int x = 10;
    cout<<"before calling the function x = "<<x<<endl;

    display(&x);
    cout<<"after calling the function x = "<<x<<endl;

    getch();
}
