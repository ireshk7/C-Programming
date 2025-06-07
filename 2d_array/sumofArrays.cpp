#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter the elements into the array ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"The Largest element in the array is "<<sum;
}