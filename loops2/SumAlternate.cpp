#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum = 0;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum +=i;
    //     }
    //     else{
    //         sum-=i;
    //     }
    // }
    if(n%2==0) sum=-n/2;
    else sum = -n/2 +n ;
    cout<<"The Sum is "<<sum<<endl;

}
