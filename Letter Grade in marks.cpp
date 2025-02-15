#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int marks;
cout << "Enter The marks" << endl;
cin>>marks;

if(marks>=80){
cout<<"You got A+"<<endl;
}
else if(marks>=70){
cout<<"You got A"<<endl;
}
else if(marks>=60){
cout<<"You got A-"<<endl;
}
else if(marks>=50){
cout<<"You got B"<<endl;

}
else if(marks>=40){
cout<<"You got c"<<endl;
}
else if(marks>=33){
cout<<"You got d"<<endl;
}
else{
cout<<"failed"<<endl;
}


}