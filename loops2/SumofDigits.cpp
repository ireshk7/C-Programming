#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int last;
    int sum = 0;
    while(n>0){
        last = n%10;
        sum = sum+last;
        n=n/10;

    }
    cout<<"The Sum of Number is : "<<sum;
}