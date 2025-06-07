#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
    return;
}
void change(int b[],int size){
    for(int i=0;i<size;i++){
        b[0]=100;
    }
}
int main(){
    int arr[]={1,2,4,7,4};
    //accessing the elements of array in another function
    // updation pass by value/reference /
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);

}