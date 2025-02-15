#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two number: ";
    cin>>num1>>num2;

    if(num1<num2)
    {
        cout<<"large = "<<num2;
    }
    else if(num2<num1)
    {
      cout<<"small = "<<num2;
    }
    getch();
}
