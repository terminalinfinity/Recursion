#include<iostream>
using namespace std;
int Name(string str, int i) {
    if (i >= str.length()) {
        return 1;
    }
    cout << str[i];
    Name(str, i+1);
}


int main() {
    string name = "Jannat";
    Name(name, 0);
    return 0;
}
