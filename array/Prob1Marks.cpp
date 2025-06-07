#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No. of Students:";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks of Students:";
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            cout<<"Roll No."<<i+1<<" has scored less than 35 "<<endl;
        }
        else{
            continue;
        }
    }
}