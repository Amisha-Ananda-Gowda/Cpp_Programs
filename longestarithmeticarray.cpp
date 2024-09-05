#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int curr=2;
    int ans=2;
    i=2;
    while(i<n){
        if(pd==a[i]-a[i-1]){
            curr++;
          
        }
        else{
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(curr,ans);
          i++;
    }
cout<<"Length of longest arithmetic subarray is "<<ans<<endl;
}