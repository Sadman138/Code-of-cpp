#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;




int main()
{
while(1)
{
int guessnumber,randomnumber;
cout << "Enter The Guess number between 1 to 5" << endl;
cin>>guessnumber;
randomnumber=rand()%5+1;
if(guessnumber==randomnumber){
cout << "Congratulations You Won" << endl;
}
else{
cout << "You have Last try again" << endl;
cout << "Random Number was: " <<randomnumber<< endl;

}




}
}