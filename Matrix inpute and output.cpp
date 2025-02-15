#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int a[3][2];
int row,col;
cout << "Ener the value of a[row][col]";

for(row=0;row<3;row++){
for(col=0;col<2;col++){
cout <<"A["<<row<<"]["<<col<<"] =" ;
cin >> a[row][col];

}

}

for(row=0;row<3;row++){
for(col=0;col<2;col++){
cout <<a[row] [col]<<" ";
}
cout << endl;
}
}















