#include <iostream>
using namespace std;

int Cubes(int n){
    if(n == 1){
        return 1;
    }
    return n*n*n + Cubes(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of cubes is " << Cubes(n);
    return 0;
}

