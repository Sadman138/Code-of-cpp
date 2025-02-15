#include<iostream>
#include<conio.h>
using namespace std;
int main(){
char ch;
cout << "Enter The any letter" << endl;
cin>>ch;
if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
cout << "Vowel" << endl;
}
else {
cout << "Consonant " << endl;

}
getch();
}