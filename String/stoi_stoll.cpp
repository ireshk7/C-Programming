#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    // string str ="123456";
    // int x =stoi(str);
    // cout<<x;
    vector <string> v;
    v.push_back("alic3");
    v.push_back("bob");
    v.push_back("3");
    v.push_back("4");
    sort(v.begin(),v.end());
    cout<<v;
}