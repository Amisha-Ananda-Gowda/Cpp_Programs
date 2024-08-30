#include<iostream>
using namespace std;

int factorial(int n){
int fact=1;
for(int i=2;i<=n;i++){
    fact*=i;
}
return fact;
}

int main(){
    int n,r;
    cout<<"Enter the value of n and r"<<endl;
    cin>>n>>r;
    int fact=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<n<<"C"<<r<<" = "<<fact;
}