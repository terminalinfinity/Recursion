#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
        return 1;
    return n*sum(n-1);
}

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    cout<<"Sum Are:"<<sum(n);
}

