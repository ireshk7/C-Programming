#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String:";
    getline(cin,s);
    int count=0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        else if(i==0) {
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1) {
            if(s[i]!=s[i-1]) count++;
        }    
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
    }
    cout<<count;
}