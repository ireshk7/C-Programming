#include<iostream>
using namespace std;
int gcd(int a,int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
}

int main(){
    int a,b;
    cout<<"Enter the Value of two Nos.";
    cin>>a>>b;
    cout<<gcd(a,b);
}