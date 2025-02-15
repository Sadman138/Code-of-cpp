#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0;
cout << "Enter The last terms" << endl;
cin>>n;

for(i=2;i<=n;i+=2){
sum=sum+i;

cout << i <<" +.." ;
}
cout << "=" << sum;
}
