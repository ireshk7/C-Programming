#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements in array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prod=arr[0];
    for(int i=1;i<n;i++){
        prod=prod*arr[i];
    }
    cout<<"Product of all elements is  "<<prod;
}