#include<iostream>
using namespace std;
int main (){
    cout<<"Enter the Cost Price :";
    float cp;
    cin>>cp;
    
    cout<<"Enter the Selling Price:";
    float sp;
    cin>>sp;

    if(sp>cp){
        cout<<"Profit of Rs:"<<sp-cp;

    }
    if(cp>sp){
        cout<<"Loss of Rs : "<<cp-sp;
    }
    if(sp==cp){
        cout<<"No Profit , No Loss!! ";
    }
}