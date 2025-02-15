#include<iostream>
using namespace std;

int main(){
    int A[3][2];
    int row, col;

    for(row = 0; row < 3; row++) {
        for(col = 0; col < 2; col++) {
            cout << "A[" << row << "][" << col << "] = ";
            cin >> A[row][col];
        }
    }

    for(row = 0; row < 3; row++) {
        for(col = 0; col < 2; col++) {
            cout << A[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}