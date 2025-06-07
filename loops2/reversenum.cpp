#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int last =0;
    int reverse = 0;
    while(n>0){
        reverse = reverse*10;
        last = n%10;
        reverse = reverse + last;
        n = n/10;

    }
    cout<<"The Number After Reversing is "<<reverse<<endl;
}