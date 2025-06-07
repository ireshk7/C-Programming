#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[5];
    cout<<"Enter the n no. of Strings ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=stoi(arr[0]);
    string maxS=arr[0];
    for(int i=1;i<5;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxS = arr[i];
        }

    }
    cout<<maxS;
}