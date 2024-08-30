#include<iostream>
using namespace std;

bool pythagoreantriplet(int x, int y, int z){
    int a,b,c;
a=max(x,max(y,z));
if(a==x){
    b=y;
     c=z;

}
else if(a==y){
     b=x;
     c=z;

}
else{
     b=x;
     c=y;
}
if((a*a)==(b*b)+(c*c)){
    return true;
}
else return false;
}

int main(){
    int x,y,z;
    cout<<"Enter the values for a, b, c"<<endl;
    cin>>x>>y>>z;
    if(pythagoreantriplet(x,y,z)){
        cout<<"Pythagorean Triplet"<<endl;
    }
    else
    cout<<"Not Pythgorean Triplet";
}