#include<iostream>
using namespace std;
int sub(int a,int b){
    if(b==0)
        return a;
    return sub(a-1,b-1);
}
int main(){
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    cout<<"Subtraction of Two Number is:"<<sub(a,b);
    return 0;
}
