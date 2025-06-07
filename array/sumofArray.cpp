#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    cout<<"The Sum of all the elements is "<<endl;
    for(int i = 0;i<n;i++){
        sum =sum+arr[i];
    }
    cout<<sum;
}