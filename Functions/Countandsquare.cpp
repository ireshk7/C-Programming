#include<iostream>
using namespace std;

int count(int a){
    int count=1;
    int x=a;
    while(a>10){
        a=a/10;
        count++;

    }
    cout<<"The Number Digits are "<<count<<endl;
    return x*x;
}
int main(){
    int num;
    cout<<"Enter the Number ";
    cin>>num;
    cout<<count(num);

}