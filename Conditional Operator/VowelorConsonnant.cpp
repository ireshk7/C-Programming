#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter the Character :";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122 )){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"The Character is a Vowel ";
        }
        else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"The Character is a Vowel ";
        }
        else{
            cout<<"The Character is a Consonant ";
        }    
    }
    else{
            cout<<"The Character is not an Alphabet ";
    }
}