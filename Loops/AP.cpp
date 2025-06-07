#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }
    int i = 100;
    for(int i = 100;i>=0;i--){
        cout<<i<<endl;
        i-=3;
    }

}