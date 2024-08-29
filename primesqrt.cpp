#include<iostream>
using namespace std;
#include <cmath>

int main(){
    int i,n;
    bool flag=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
        }
    }
    if( flag==0){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}