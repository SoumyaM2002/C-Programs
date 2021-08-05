#include<iostream>
using namespace std;
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i),b(j){
            cout<<"Initializtion constructor is executed "<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main(){
    Test(4,5);
return 0;
}
/* Different types of method we can use for constructor initialization 
1. Test(int i,int j) : a(i),b(i+j)
2. Test(int i,int j) : a(i),b(a+j)
3. Test(int i,int j) : a(i),b(2*j)

** Special Case- Test(int i,int j) : b(j),a(i+b) --> Can't be executed because a is declared first then b is 
declared so we have to write a first and vice-versa.
*/
/*Another syntax that can be done -
Test(int i,int j) : a(i){
    b=j;
}
Also:
Test(int i,int j){
    a=i;
    b=j;
}
*/