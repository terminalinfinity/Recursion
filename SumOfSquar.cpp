#include <iostream>
using namespace std;

int Squares(int n){
    if(n == 1){
        return 1;
    }
    return n*n + Squares(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of squares is " << Squares(n);
    return 0;
}

