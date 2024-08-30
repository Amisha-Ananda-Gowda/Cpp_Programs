#include<iostream>
using namespace std;

int sum(int a,int b){
    int sum=a+b;
    return sum;
}

int main(){
    int a,b,add;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    add=sum(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<add<<endl;
}