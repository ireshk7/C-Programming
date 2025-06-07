#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter the Sides of triangle ";
    cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<","<<b<<","<<c<<"   Can be the Sides of a Triangle ";
    }
    else{
        cout<<"Its not a Triangle :";
    }
}