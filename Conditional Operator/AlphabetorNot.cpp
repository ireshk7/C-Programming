#include <iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter the Character : "<<endl;
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=80){
        cout<<"Its an Character : ";
    }
    else{
        cout<<"Its not an Character ";
    }
}