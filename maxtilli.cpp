#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int j=0;j<n;j++){
        cin>>a[j];

    }
    int max=a[0];
    cout<<"Enter the value of i"<<endl;
    cin>>i;
    for(int j=1;j<=i;j++){
      if(a[j]>max){
        max=a[j];
      }
    }

    cout<<"Maximum: "<<max<<endl;

    return 0;
}