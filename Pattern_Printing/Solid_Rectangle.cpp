#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the No of Rows:";
    cin>>n;
    cout<<"Enter the No of Collums:";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}