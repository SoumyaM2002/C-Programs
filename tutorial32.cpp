#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;
        }
        Number(Number &obj){
            cout<<"Copy contructor called!!!"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The value a is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display(); 

    Number z1(z);
    z1.display();

    z2=z;                // Here Copy constructer cannot be invoked as assignment operator is been used

    Number z3=z;         // Here Copy constructer can be invoked as here object is been created instantly
}