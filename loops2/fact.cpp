#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int fact=1;
    int fact1=1;
    int i;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    for(int i=1;i<=n;i++){
        fact1=fact1*(i-1);
    }
    cout<<"The Factorial of Num "<<n<<" is:"<<fact<<endl;
    cout<<"The Factorial of Num "<<n<<" is:"<<fact1<<endl;
    
}
