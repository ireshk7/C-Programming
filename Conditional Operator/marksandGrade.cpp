#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an Marks :";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Exellent :";
    }
    else if(n>=81){
        cout<<"Very Good";
    }
    else if(n>=71){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Can Do Better ";
    } 
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Below Average ";
    }
    else{
        cout<<"Fail:";
    }
}