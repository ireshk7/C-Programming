#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,3,3,3,4,4,4,5,5,9};
    int n = 13;
    int x = 4;
    bool flag = false;

    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{  // arr[mid-1] == x;
                hi = mid - 1;
            }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<-1;
}