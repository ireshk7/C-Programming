#include<iostream>
using namespace std;
int prod(int *ptr1,int *ptr2){
    return (*ptr1)*(*ptr2);
}
int main(){
    int a,b;
    cout<<"Enter the Two Numbers ";
    cin>>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    int product=prod(ptr1,ptr2);
    cout<<product;
}