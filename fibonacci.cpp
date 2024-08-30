#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    for(int i=1;i<=n;i++){
    cout<<t1;
    int t3=t2+t1;
    t1=t2;
    t2=t3;
}
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    fib(n);
    return 0;
}