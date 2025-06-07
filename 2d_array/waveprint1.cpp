#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no of Rows: ";
    cin>>m;
    cout<<"Enter the no of Colums: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the Elements into the array ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

/* 1 2 3 
   4 5 6
   7 8 9
   
=> 7 8 9 6 5 4 1 2 3    */

    // for(int i=m-1;i>=0;i--){
    //     if(i%2==0){
    //         for(int j=0;j<n;j++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    // }

/*  1 2 3 
    4 5 6
    7 8 9

=>  1 4 7 8 5 2 3 6 9
*/
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}