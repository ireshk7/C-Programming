#include<iostream>
#include<vector>
using namespace std;
void display(vector <int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(3);
    v.push_back(5);
    vector <int> v2(v.size());
    display(v);
    for(int i=0;i<v.size();i++){
        //i+j=size-1
        //j=size-1-i
        int j=v.size()-1-i;
        v2[i]=v[j];
    }
    display(v2);
      
}