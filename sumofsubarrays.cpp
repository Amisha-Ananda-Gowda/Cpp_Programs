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
    sum+=((n)*a[0]+(n)*a[n-1]);
    for(i=1;i<n-1;i++){
sum+=(n+1)*a[i];
    }
    cout<<"Sum of subarrays= "<<sum<<endl;
}