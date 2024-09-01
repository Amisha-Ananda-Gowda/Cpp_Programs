#include<iostream>
using namespace std;

int main(){
    int i,n;
    int sum=0;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];

    }
  
    for(i=0;i<n;i++){
        sum=0;
for(int j=i;j<n;j++){
sum+=a[j];
cout<<sum<<endl;
}
    }
    return 0;
}