#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    reverse(s.begin()+1,s.end()+5);
    cout<<s;
}