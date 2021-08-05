#include<iostream>
using namespace std;

//* is used to get the value
//& is used to get the address
//** is used to get the value of pointer pointing to another pointer also used to assign a pointer
int main(){
    int a=3;
    int* b=&a;
    int** c=&b; // pointer pointing to a pointer address of c is b's address
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<b<<endl;
    cout<<"The value of b is "<<*b<<endl;
    cout<<"the adress of b is "<<c<<endl;
    cout<<"The value of c is "<<**c<<endl; //double dereferencing to get the value
    return 0;
}