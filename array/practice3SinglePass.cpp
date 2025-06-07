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
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<n;i++){
            if(arr[i]>max){
            smax=max;
            max=arr[i];
            }
            else if(smax<arr[i] && arr[i!=max]){
                smax=arr[i];
            }
        }
    if(smax==arr[0]){
        cout<<"No second element exists:: ";
    }    
    else{
        cout<<"Maximum Element in the array is  "<<smax;
    }
}