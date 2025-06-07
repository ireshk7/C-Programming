#include<iostream>
using namespace std;
int fact(int x ){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;

} 
int permutation(int n,int r){
    int per=fact(n)/fact(r);
    return per;
}
int main(){
    int n,r;
    cout<<"Enter the Values of n and r:";
    cin>>n>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr = combination(n,r);
    int per = permutation(n,r);
    cout<<ncr<<endl<<per;
}
