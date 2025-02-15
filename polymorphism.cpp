#include<iostream>
#include<conio.h>
using namespace std;

class person
{
public:
   virtual void display()
    {
        cout<<"i am a person"<<endl;
    }
};
class student : public person
{
public:
    void display()
    {
        cout<<"i am a student"<<endl;
    }
};
class teacher : public person
{
public:
    void display()
    {
        cout<<"i am a teacher"<<endl;
    }
};
int main()
{
    teacher t;
    student s;
    person *p;

    p=&s;
    p-> display();

    p = &t;
    p -> display();

    getch();
}

