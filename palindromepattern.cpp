#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++){
            if(j<i){
               cout<<i-j+1<<" ";
            }           
            else
            cout<<j-i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}