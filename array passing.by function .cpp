#include<iostream>
using namespace std;

void array(int num[]) {
    for (int i = 0; i < 5; i++) {
        cout << num[i] <<" ";
    }
}

int main() {
    int num[] = {10, 20, 30, 40, 50};  // Define the array
    array(num);  // Pass the array to the function
}