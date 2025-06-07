#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention size 
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(12);
    v.push_back(6);
    v.push_back(9);
    v.push_back(0);
    int x = 6;
    int idx=-1;
    for(int i=v.size();i>0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;
    
}