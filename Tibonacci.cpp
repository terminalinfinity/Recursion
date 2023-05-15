#include <iostream>
using namespace std;

int tribonacci(int n){
    if(n == 0 || n == 1){
        return 0; // base case
    }
    else if(n == 2){
        return 1; // base case
    }
    else{
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3); // recursive call
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The Tribonacci number is " << tribonacci(n);
    return 0;
}

