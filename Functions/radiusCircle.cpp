#include<iostream>
using namespace std;

int circle(int r){
    return 3.14*r*r;
}
int main(){
    int radius;
    cout<<"Enter the Radius of the Circle: ";
    cin>>radius;
    cout<<"The Radius of the Circle is "<<circle(radius);

}