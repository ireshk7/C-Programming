#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the Positive Num : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Given Number is Divisible by 5 and 3:";

    }
    else{
        cout<<"Given Number is not Divisible ";
    }
}