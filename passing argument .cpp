#include<iostream>
using namespace std;
void num(int *num){
*num=20;
}
int main() 
{
int x=10;
cout << "Value of Function before calling"<<x << endl;

num(&x);
cout << "Value of function after calling"<< x << endl;
}