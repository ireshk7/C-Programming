#include<iostream>
using namespace std;
int main (){
    int m,n;
    cout<<"Enter the No of Rows: ";
    cin>>m;
    cout<<"Enter the No of Columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the Array elements into the array ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxs=-1000000;
    int maxr=-1;

    for(int i=0;i<m;i++){
        int rows=0;
        for(int j=0;j<n;j=j++){
            rows+=arr[i][j];
        }
        if(rows>maxs){
            maxs=rows;
            maxr=i;
        }
    }
    cout<<"Largest Rows No. "<<maxs<<" "<<maxr;
    
}