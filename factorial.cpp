#include<iostream>
using namespace std;

  int factorial(int n){
        int fact=1;
        for(int i=2;i<=n;i++){
          fact=fact*i;
        }
        return fact;
    }

int main(){
    int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
  return 0;
}