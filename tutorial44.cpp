#include<iostream>
using namespace std;
/*
Case 1:
class B: public A{
    Order of execution of constructor --> first A() then B()
};
Case 2:
class A: public B,public C{
    Order of execution of constructor --> first B() then C() then A()
};
Case 3:
class A: public B,virtual public C{
    Order of execution of constructor --> first C() then B() then A()
};
*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 class conductor called "<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 class conductor called "<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derived : public Base1,public Base2{  // If here Base1 and Base2 are exchanged then Constructor 
    int derived1,derived2;     // of Base2 will run first 
    public:
        Derived(int a,int b,int c,int d) :  Base1(a), Base2(b){  // If Base1() and Base2() are exchanged 
        derived1=c;                                              // no output will be changed
        derived2=d;
        cout<<"Derived class constructor called "<<endl;
    }
    void printData(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }

};

int main(){
    Derived soumya(34,56,3,6);
    soumya.printDataBase1();
    soumya.printDataBase2();
    soumya.printData();

return 0;
}