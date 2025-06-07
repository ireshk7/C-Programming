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
    cout<<endl;
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           t[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }


}