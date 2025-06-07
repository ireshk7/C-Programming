#include<iostream>
using namespace std;

int odd(int a,int b){
    for (int i=a+1;i<b-1;i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter the two Nos. ";
    cin>>a>>b;
    cout<<odd(a,b);

}