#include <iostream>
using namespace std;

int power(int x,int n){
    if(n==1) return x;
    int ans = power(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }
}



int main(){
    int a,b;
    cout<<"Enter Base:";
    cin>>a;
    cout<<"Enter the Exponent: ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is "<<power(a,b);
}