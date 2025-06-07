#include<iostream>
using namespace std;
int main (){
    int arr1[3][3];
    cout<<"Enter the 1st Array elements into the array ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];

        }
    }
    int arr2[3][3];
    cout<<"Enter the 2st Array elements into the array ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
