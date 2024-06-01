#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    if(n1>n2){
        cout<<n1<<" is greater than "<<n2<<endl;
    }
    else if (n1<n2){
        cout<<n1<<" is lesser than "<<n2<<endl;
    }
    else
    {
        cout<<n1<<" is equal to "<<n2;
    }
    
    return 0;
}