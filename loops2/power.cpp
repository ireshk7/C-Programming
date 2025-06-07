#include<iostream>
using namespace std;
int main(){
    int a,b;
    float power=1;
    cout<<"Enter Base"<<endl;
    cin>>a;
    cout<<"Enter Exponent"<<endl;
    cin>>b;
    bool flag=true;
    if(b<0){
        flag = false;
        b = -b;
    }
    for(int i=0;i<b;i++){
        power *=a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    if(a==0 && b==0) cout<<"Not Defined ";
    else cout<<a<<" raised to "<<b<<" is "<<power ;
}