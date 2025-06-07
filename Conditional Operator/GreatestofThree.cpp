#include<iostream>
using namespace std;
int main (){
    int n1,n2,n3;
    cout<<"Enter the 3 Numbers "<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3){
        cout<<"The Greatest Element is  :"<<n1;
    }
    if(n2>n1 && n2>n3){
        cout<<"The Greatest Element is  :"<<n2;

    }
    if(n3>n1 && n3>n2){
        cout<<"The Greatest Element is  :"<<n3;

    }
    

}