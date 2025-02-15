#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n){
if(n==1){
return n;
}
else
return n*(n-1);



}
int main(){
fact(5);
cout << fact(5)<<endl;


}