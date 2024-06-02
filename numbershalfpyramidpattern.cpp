#include<iostream>
using namespace std;

int main(){
    int i,j,row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    for(i=1;i<row+1;i++){
        for(j=0;j<i+1;j++){
            cout<<i<<" ";
        }
cout<<endl;
    }
    return 0;
}