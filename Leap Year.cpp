#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int year;
cout << "Enter your any year" << endl;
cin>>year;
if(year%4==0 && year%100!=0){
cout <<"Leap year"<< endl;
}
else if(year%4==0){

cout<<"Leap year "<< endl;
}
else{
cout << "not a leap year" << endl;
}

}











