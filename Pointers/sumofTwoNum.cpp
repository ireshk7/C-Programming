#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Value of a and b ";
    cin>>a>>b;
    int* p=&a;
    int* q=&b;
    cout<<*p+*q;
}