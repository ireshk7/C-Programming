#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Rows: ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}