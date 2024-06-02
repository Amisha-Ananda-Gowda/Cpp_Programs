#include<iostream>
using namespace std;

int main(){
    int i,count=1,j,row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    for(i=1;i<row+1;i++){
        for(j=0;j<i;j++){
            cout<<count++<<" ";
        }
cout<<endl;
    }
    return 0;
}