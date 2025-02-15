#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,sum=0;
cout << "Enter The  Numbers of students" << endl;
cin>>n;
int students[n];
for(int i=0;i<n;i++){
cout << "Enter the marks of students no " <<i+1<<endl ;
cin>>students[i];
sum=sum+students[i];

}
cout << "The result of students marks "<<sum<< endl;
float avg=(float)sum/n;
cout << "The avg is = " << avg << endl;
int i;
 int maxnum=students[0];
 int minnum=students[0];
 for(i=1;i<n;i++){
 if(maxnum < students[i]){
 maxnum=students[i];
}
if(minnum > students[i]){
minnum=students[i];

}
}
cout << "the max number is" <<maxnum<<endl;
cout << "The min number is " << minnum<<endl;
}