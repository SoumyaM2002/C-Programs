#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"Good Morning"<<endl; 
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Hello my beautiful people"<<endl;
        }
};
class Derived : public Base1,public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet();               // Ambiguity resolution is used
        }
};
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};
class D : public B{                // Here ambiguity resolution automatically occurs
    public:
        void say(){
            cout<<"Hello Tokyo 2020 olympics"<<endl;
        }
};
int main(){
/*Ambiguity 1
Base1 obj;
Base2 obj1;
obj.greet();
obj1.greet();
Derived d;
d.greet();*/
//Ambiguity 2
B b;
b.say();
D d;
d.say();
return 0;
}