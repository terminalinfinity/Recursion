#include <iostream>
using namespace std;
int digits(int num){
    if(num == 0){
        return 1;
    }
    digits(num/10);
    cout << num % 10 << " ";
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Digits of the number are: ";
    digits(num);
    return 0;
}
