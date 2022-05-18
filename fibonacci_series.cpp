#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
    return n;
    else
    return (fib(n-1)+fib(n-2));
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"answer:"<<fib(n)<<endl;
    cout<<"This code is done by Arin Sharma"<<endl;
    return 0;
}