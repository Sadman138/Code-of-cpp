#include<iostream>
#include<conio.h>
using namespace std;
int main(){
double celcius,farenheit,Farenheit,Celcius;
cout<<"Enter The Celcius value";
cin>>celcius;
farenheit=1.8 * celcius+ 32;
cout<<"The Farenheit value is: "<<farenheit;
cout<<endl;

cout<<" Enter The Farenheit value is: ";
cin>>Farenheit;
Celcius=(Farenheit-32)/1.8;
cout << "The Celcius value is: " << Celcius;

}