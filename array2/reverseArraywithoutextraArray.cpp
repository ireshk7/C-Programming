#include<iostream>
#include<vector>
using namespace std;
void display(vector <int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector <int>& v){
    int temp = v[i];
    v[i]=v[j];
    v[j]=temp;

}
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(3);
    v.push_back(5);
    display(v);
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    display(v);
    reversePart(0,2,v);
    display(v);
}