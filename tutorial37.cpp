#include<iostream>
using namespace std;
class Base{
    protected:
        int a;
    public :
        int b;

};
class Derived : protected Base{
// Here members of Derived class can access protected member of base class like 'a' in this case.
};
int main(){
Base b;
Derived d;
//cout<<d.a;    // will not work since a is protected in both base as well as derived class 
return 0;
}