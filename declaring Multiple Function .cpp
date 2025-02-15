#include<iostream> 
#include<conio.h>
using namespace std;


void addition(int a,int b)

{
int sum;
sum=a+b;
cout << "Sum= " <<sum<< endl;

}
void Subtraction(int a,int b)

{
int sub;
sub=a-b;
cout << "Sub= " <<sub<< endl;

}
void Multiplication(int a,int b)

{
int mul;
mul=a*b;
cout << "Mul= " <<mul<< endl;

}

void Division (int a,int b)

{
float  div;
div=(float)a/b;
cout << "div= " <<div<< endl;

}
int main(){



addition(20,10);
Subtraction(20,20);
Multiplication(20,20);
Division(20,15);







getch();

}
