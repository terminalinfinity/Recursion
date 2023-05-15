#include <iostream>
using namespace std;

int palim(int n, int i) {
    if(n == 0) {
        return i;
    }
    i = (i * 10) + (n % 10);
    return palim(n/10, i);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(palim(n, 0) == n) {
        cout<<"palindrome number";
    } else {
        cout<<"not a palindrome number";
    }
    return 0;
}

