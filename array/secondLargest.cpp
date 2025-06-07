#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"Second Largest Element in the array is  "<<smax;
}