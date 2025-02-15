#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    for(int i=1;i<5;i++)
    {
        int randomNumber = rand()%5 + 1;
        cout<<"Rnadom number = "<<randomNumber<<endl;
    }
    getch();
}
