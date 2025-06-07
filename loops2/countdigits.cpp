#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number to be Counted:";
    cin>>n;
    int count=0;
    int a = n;
    while(n>0){
        n = n/10;
        count++;
    }
    if(a==0) cout<<1;
    else{
        cout<<"The Total no of Digits are "<<count<<endl; 
    }
    
} 
