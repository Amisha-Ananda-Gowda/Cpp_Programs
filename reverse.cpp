#include<iostream>
using namespace std;

int main(){
    int n,last;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;n>0;i++){
        last=n%10;
        cout<<last;
        n=n/10;
    }
    return 0;

    }