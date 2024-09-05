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
    const int N=1e6+2;
    int idx[N];
    for(i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx=2147483647;
    for(i=0;i<n;i++){
      if(idx[i]!=-1){
        minidx=min(minidx,idx[a[i]]);
      }
      else{
        idx[a[i]]=i;
      }
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}