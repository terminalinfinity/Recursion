#include<iostream>
using namespace std;
int num(int i){
    if(i==0){
        return 1;
    }
    num(i-1);
    cout<<i<<" ";
}

int main(){
    int i;
    cout<<"Enter Number:";
    cin>>i;
    cout<<"Numbers are:";
    num(i);
}
