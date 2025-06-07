#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}

void sortNeg(vector <int>& a){
    int n=a.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]>0) i++;
        else if(a[j]<0) j--;
        else if(a[i]<0 && a[j]>0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }

        
    }
}


int main(){
    vector <int> v;
    v.push_back(-1);
    v.push_back(1);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(-5);
    v.push_back(6);
    display(v);
    sortNeg(v);
    display(v);
}