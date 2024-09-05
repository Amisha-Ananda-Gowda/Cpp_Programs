#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int a[n+1];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    int mx=-1;
    int count=0;
    a[n+1]=-1;
    int ans=0;

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    for(i=0;i<n;i++){
        if((a[i]>mx)&&(a[i]>a[i+1])){
            ans+=1;
           
        }
        mx=max(mx,ans);

    }
    cout<<"Number of record breaking days= "<<ans<<endl;
}