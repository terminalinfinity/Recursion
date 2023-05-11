#include<iostream>
using namespace std;
int num(int i){
    if(i==0){
        return 1;
    }
    cout<<i<<" ";
    num(i-1);
}

int main(){
    int i;
    cout<<"Enter Number:";
    cin>>i;
    cout<<"Numbers are:";
    num(i);
}
