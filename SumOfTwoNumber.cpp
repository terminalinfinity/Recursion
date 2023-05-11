#include<iostream>
using namespace std;
int add(int a,int b){
    if(b==0)
        return a;
    return add(a+1,b-1);
}
int main(){
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    cout<<"Addition of two number:"<<add(a,b);
    return 0;
}
