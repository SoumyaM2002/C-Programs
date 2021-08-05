#include<iostream>
#include<string.h>
using namespace std;
class Animal{
    private:
        string  a,b,c;
    public:
        string d,e;
    void setdata(char a1,char b1,char c1);
    void getdata(){
        cout<<"The animal 1 is "<<a<<endl;
        cout<<"The animal 2 is "<<b<<endl;
        cout<<"The animal 3 is "<<c<<endl;
        cout<<"The animal 4 is "<<d<<endl;
        cout<<"The animal 5 is "<<e<<endl;
    }
};
void Animal :: setdata(char a1,char b1,char c1){
        a=a1;
        b=b1;
        c=c1;
}
int main(){
    Animal Zoo;
    Zoo.d="Dear";
    Zoo.e="Tiger";
    Zoo.setdata('X','Y','Z');
    Zoo.getdata();
    return 0;
}