#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
    void setdata(int a1,int b2,int c1);     // This statement promises to the compiler that setdata is to be
    void getdata(){                         // created further here declaration should be there but it will
        cout<<"The value of a is "<<a<<endl;  // work when it finds setdata in the upcoming statements i.e 
        cout<<"The value of b is "<<b<<endl;    // void Employee :: ..........
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
    
};
void Employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee harry;
    harry.e=34;
 // harry.a=10;     This statement cannot be excecuted because 'a' is private
    harry.d=98;
    harry.setdata(1,2,4);
    harry.getdata();
    return 0;
}