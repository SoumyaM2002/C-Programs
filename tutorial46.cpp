#include<iostream>
using namespace std;

int main(){
    //Basic Example
    int a=4;
    int* ptr=&a;
    //* ptr=999;  --> It can also be written
    cout<<"The value of a is "<<*(ptr)<<endl;
    //New operator
    int*p=new int(40);
    float*p1=new float(57.67);
    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value at address p1 is "<<*(p1)<<endl;
    int* arr=new int[3];
    arr[0]=98;
    arr[1]=45;
    //(*arr+1)=45; -->It can also be written 
    arr[2]=343;
    delete[] arr;       // For deleting the memory which has been allocated.
    cout<<"The value at arr[0] is "<<arr[0]<<endl;
    cout<<"The value at arr[1] is "<<arr[1]<<endl;
    cout<<"The value at arr[2] is "<<arr[2]<<endl;

return 0;
}