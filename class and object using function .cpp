#include<iostream>
#include<conio.h>
using namespace std;

class student{
public:
int id;
double cgpa;
void display() {

cout <<id <<" "<<cgpa << endl;


}



};


int main(){

student sadman;
sadman.id=24;
sadman.cgpa=3.75;
sadman.display();




student safat;
safat.id=25;
safat.cgpa=3.75;
safat.display();









}