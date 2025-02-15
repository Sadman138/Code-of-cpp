#include<iostream>
using namespace std;
int main()
{
    try
    {
        int num1,num2;

        cout<<"enter 1st number: ";
        cin>>num1;

        cout<<"enter 2nd number: ";
        cin>>num2;
        if(num2==0)
        {
            throw -1;
        }

        double result = (double)num1/num2;
        cout<<"result : "<<result<<endl;
    }
    catch(int x)
    {
        cout<<"divide by zero is not possible."<<endl;
        cout<<"please try again."<<endl;
    }
}
