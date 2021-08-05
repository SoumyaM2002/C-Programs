#include<iostream>
using namespace std;
// Table of any number
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n;
        cout<< "X" ;
        cout<<i;
        cout<<"=";
        cout<<n*i<<endl;
    }
}