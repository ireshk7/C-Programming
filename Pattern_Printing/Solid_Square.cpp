#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No. of Rows and Columns ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}