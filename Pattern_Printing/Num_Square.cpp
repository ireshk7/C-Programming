#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Rows: ";
    cin>>n;
    int value;
    for(int i=1;i<=n;i++){
        value=65;
        for(int j=1;j<=n;j++){
            cout<<(char)value;
            value++;
        }
        cout<<endl;
    }
}