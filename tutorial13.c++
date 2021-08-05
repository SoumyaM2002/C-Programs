#include<iostream>
using namespace std;
void swap(int a,int b ){
    int temp=a;
    a=b;
    b=temp;
}
void swapPointer(int* a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
/*int swapReferenceVar(int &a, int &b){  
        int temp=a;
        a=b;
        b=temp;
}*/
int & swapReferenceVar(int &a, int &b){  
        int temp=a;
        a=b;
        b=temp;
        return a;
}
int main(){
    int x=4,y=5;
    cout<<"The value of x is "<<x<<" and the value of y is " <<y<<endl;
    swap(x,y);//This will not swap x and y
    cout<<"The value of x is "<<x<<" and the value of y is " <<y<<endl;
    swapPointer(&x,&y);// Swap of x and y using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is " <<y<<endl;
    /*swapReferenceVar(x,y);// Swap of x and y using C++ pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is " <<y<<endl;*/
    swapReferenceVar(x,y)=766;
    cout<<"The value of x is "<<x<<" and the value of y is " <<y<<endl;
    



    return 0;
}