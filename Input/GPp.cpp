#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Values of n ";
    cin>>n;
    int start=3,r=4;
    for(int i=1;i<n;i++){
        cout<<start<<" ";
        start*=r;
    }
}  