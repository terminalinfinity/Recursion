#include <iostream>
using namespace std;

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main() {
    int n, r;
    cout << "Enter the values of n and r: ";
    cin >> n >> r;
    if (n < r) {
        cout << "Invalid input";
        return 0;
    }
    cout << "nCr = " << nCr(n, r);
    return 0;
}

