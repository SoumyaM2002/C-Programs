#include<iostream>
using namespace std;

// **** Function overloading ****
// Here we can do different works using same function name
// Here compiler accept the function to do work according to the no. of arguments given 
int sum(int a ,int b){
    return a+b;
    }
int sum(int a,int b,int c){
    return a+b+c;
    }

int volume(int l,int b,int h){
    return l*b*h;
    }
int volume(int r,int x){
    return 3.14*r*r*x;
    }
int main(){
    cout<<"Sum using two arguments "<<sum(3,6)<<endl;
    cout<<"Sum using three arguments "<<sum(20,40,50)<<endl;
    cout<<"Volume of cuboid is "<<volume(3,4,5)<<endl;
    cout<<"Volume of cylinder is "<<volume(4,5)<<endl;
    return 0;
}