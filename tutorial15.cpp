#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1);

}
int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    cout<<"The fatorial of "<<x<<" is "<<factorial(x);
    return 0;
}