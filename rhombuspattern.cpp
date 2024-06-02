#include<iostream>
using namespace std;
int main(){
    int i,j,row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    for(i=0;i<row;i++){
        for(j=0;j<2*row;j++){
            if(j>=row-i && j<2*row-i){
            cout<<"* ";
            }
        else {
            cout<<"  ";
        }
        }
        cout<<endl;
    }
    return 0;

}