#include<iostream>
using namespace std;
class Complex;  // Forward declaration is used to say to compiler that Complex has existance  
class Calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(Complex,Complex);
        int sumImaginaryComplex(Complex,Complex);
};
class Complex{
    int a,b;
    public :
        // Individually declaring function as friends
        friend int Calculator :: sumRealComplex(Complex,Complex);  //its helps to access private data of class 
        friend int Calculator :: sumImaginaryComplex(Complex,Complex);     //Complex
        // If we want to access all the functions of class Calculator then make it friend(whole class)
        friend class Calculator;
        void setNumber(int n1,int n2){       
            a=n1;
            b=n2;
        }
        friend Complex sumComplex(Complex o1,Complex o2);  // using friend function
        void printNumber(){
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int Calculator :: sumRealComplex(Complex o1,Complex o2){
    return (o1.a+o2.a);
}
int Calculator :: sumImaginaryComplex(Complex o1,Complex o2){
    return (o1.b+o2.b);
}
int main(){
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,8);
    Calculator calc;
    int res= calc.sumRealComplex(o1,o2);
    int ima= calc.sumImaginaryComplex(o1,o2);
    cout<<"The sum of real part of 01 and o2 "<<res<<endl; 
    cout<<"The sum of imaginary part of 01 and o2 "<<ima<<endl; 
return 0;
}