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
    int x;
    cout<<"Enter the Element ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Number of Elements greater than "<<x<<" are "<<count;
}