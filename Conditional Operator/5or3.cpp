#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Positive Num : ";
     cin>>n;
    // if((n%5==0 || n%3==0) && (n%15!=0)){
    //     cout<<"Given Number is Divisible by 5 or 3 but not by 15:";

    // }
    // else{
    //     cout<<"NOt Matching condition ";
    // }
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"The number is Divisible by 5 or 3 but not 15";
        }
     else{
         cout<<"Not MAtching";
        }
    }
    else{
        cout<<"Not matching ";
    }
}