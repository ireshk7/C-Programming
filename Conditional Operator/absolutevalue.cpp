#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;
    // if(n>0){
    //     cout<<n;
    // }
    // else{
    //     cout<<-(n);
    // }
    if(n<0){
        n = -n;
    }
    cout<<n;
}