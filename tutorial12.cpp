#include<iostream>
using namespace std;
int sum(int a,int b);           // Function prototype-it helps the main to find the function ahead
//int sum(int,int);   --> Acceptable
//int sum(int a,b);   --> Unacceptable
void g(void);
//void g() --> Acceptable
int main(){
    int num1,num2;
    cout<<"Enter the first value ";
    cin>>num1;
    cout<<"Enter the second value ";
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;  //num1 & num2 are actual parameter
    g();

    return 0;
}
int sum(int a ,int b){      // a & b are formal parameter
    int z= a+b;
    return z;
}
void g(){
    cout<<"Good Morning";
}