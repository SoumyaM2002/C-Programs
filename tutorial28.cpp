#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public :
        Complex(int ,int);       // Constructor declaration 
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x,int y){   //----> It is parameterized constructor as it has two parameters
    a=x;
    b=y;
}
int main(){
    // Implicit Call
    Complex a(3,4);
    a.printNumber();


    // Explicit Call 
    Complex b= Complex(5,7);
    b.printNumber();
    return 0;
}