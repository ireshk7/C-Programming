#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n = 5;
    int arr[n];
    cout<<"Enter the Array Elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max Element is "<<max;

}