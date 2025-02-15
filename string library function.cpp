#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char name1[]="ABIR";
    char name2[]="ABIR";

    int value = strcmp(name1,name2);

    if (value==0)
        cout<<"strings are eqaul";
    else
        cout<<"strings arer not equal";

    getch();
}
