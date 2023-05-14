#include <iostream>
using namespace std;
int decToBin(int n) {
    if (n == 0) {
        return 0;
    }
    decToBin(n / 2);
    cout << n % 2;
}

int main() {
    int d;
    cout << "Enter a decimal number: ";
    cin >> d;
    cout << "Binary Number is: ";
    decToBin(d);
    return 0;
}
